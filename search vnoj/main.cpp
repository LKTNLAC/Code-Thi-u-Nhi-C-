#include <bits/stdc++.h>

using namespace std;

long long a[1000000],n,q,i,x;


bool check(long k)
{
    long l=1,r=n,m=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==k)
            return true;
        if(k>a[m])
            l=m+1;
        else if(k<a[m])
                r=m-1;
    }
    return false;
}
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>x;
        if(check(x)==true)
            cout<<1<<endl;
        else cout<<0<<endl; //cặc cặc cặc cặc cặc OTZ
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("search.inp","r",stdin);
    freopen("search.out","w",stdout);
    input();
    return 0;
}
