#include <bits/stdc++.h>

using namespace std;

long long a[1000000],n,q,i,x;


long checkfirst(long k)
{
    long l=1,r=n,m=0,dem=0,pos=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==k)
            pos=m;
        if(k<=a[m])
            r=m-1;
        else
            l=m+1;
    }
    return pos;
}
long checkend (long k)
{
    long l=1,r=n,m=0,dem=0,pos=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==k)
            pos=m;
        if(k>=a[m])
            l=m+1;
        else r=m-1;
    }
    return pos;
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
        long l,r;
        l=checkfirst(x);
        r=checkend(x);
        if(l<0)
            cout<<0<<endl;
        else
            cout<<r-l+1<<endl;

    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("index.inp","r",stdin);
    freopen("index.out","w",stdout);
    input();
    return 0;
}
