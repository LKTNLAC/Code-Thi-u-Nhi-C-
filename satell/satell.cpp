#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
const int maxx = 1e7;
struct test{
    long long p,t;
    bool operator < (const test &i) const {return t> i.t;}
}a[maxx];
long long n,k,s[maxx];

int main()
{
    freopen("satell.inp","r",stdin);
    freopen("satell.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    long long cnt=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[cnt].t;
            a[cnt].p=i;
            cnt++;
        }
    }
    sort(a,a+cnt);
    for(int i=1;i<n*k;i++)
    {
            s[a[i].p]+=i;
    }
    for(int i=1;i<=k;i++)
    {
        s[i]-=n*(n-1)/2;
        cout<<s[i]<<' ';
    }
}
