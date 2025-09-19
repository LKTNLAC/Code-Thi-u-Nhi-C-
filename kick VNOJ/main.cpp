#include <bits/stdc++.h>

using namespace std;

long long n;

long long f(long long i)
{
    long long sum=i*(i+1)/2;
    return sum;
}

long long g(long long k, long long i)
{
    if(f(i)<=k)
        return 0;
    else return 1;
}

long long checkend(long long l, long long r)
{
    long long m=0,pos=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(g(n,m)==0)
            pos=m;
        if(g(n,m)<=0)
            l=m+1;
        else r=m-1;
    }
    return pos;
}

void vet()
{
    long i,sum=0;

    for(i=1;i<=n+1;i++)
    {
        sum=sum+i;
        if(sum>n)
        {
            cout<<i-1;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("kick.inp","r",stdin);
    freopen("kick.out","w",stdout);
    cin>>n;
    if(n<1000000)
    {
        vet();
        return 0;
    }
    long long x=checkend(1,2000000000);
    cout<<x;
    return 0;
}
