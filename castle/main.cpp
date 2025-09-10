#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
long long a[100005],k[100005],q[100005],rr[100005];
long long ans,cnt;
void input()
{
	long i;
	cin>>n>>s;
	for(i=1;i<=n;i++)
        cin>>a[i]>>k[i];
}
void xep(long long i, long long j)
{
    long long c;
    c=i;
    i=j;
    j=c;
}
void sortk(long long l,long long r)
{
    long i,j,x,y;
    i=l;
    j=r;
    x=k[l+rand()%(r-l+1)];
    while(i>j)
    {
        while (k[i] < x) i=i+1;
        while (k[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a[i],a[j]);
            xep(k[i],k[j]);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortk(i,r);
    if (l<j) sortk(l,j);
}
void init()
{
    long i;
    cnt=0;
    for(i=1;i<=n;i++)
    {
        q[i]=a[i]/k[i];
        cnt=cnt+q[i];
        rr[i]=a[i]%k[i];
        if(rr[i]>0)
            cnt++;
    }
}
void sortr(long long l,long long r)
{
    long i,j,x,y;
    i=l;
    j=r;
    x=rr[l+rand()%(r-l+1)];
    while(i>j)
    {
        while (rr[i] < x) i=i+1;
        while (rr[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a[i],a[j]);
            xep(rr[i],rr[j]);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortr(i,r);
    if (l<j) sortr(l,j);
}
void solve()
{
    long long tmp;
    long i,j;
    cnt=s-cnt;
    ans=0;
    if(cnt>=0)
        return;
    j=0;
    for(i=1;i<=n;i++)
    {
        while((j<n)&&(rr[j+1])<=k[i])
        {
            j++;
            ans=ans+rr[j];
            if(rr[j]>0)
                cnt--;
            if(cnt<=0)
                break;
        }
        if(cnt<=0)
            break;
        tmp=min(cnt,q[i]);
        ans=ans+tmp*k[i];
        if(tmp==cnt)
            break;
        else cnt=cnt-tmp;
    }
}
void output()
{
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("castle.inp","r",stdin);
    freopen("castle.out","w",stdout);
    input();
    sortk(1,n);
    init();
    sortr(1,n);
    solve();
    output();
    return 0;
}
