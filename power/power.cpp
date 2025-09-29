#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a;
ll process()
{
    ll k=1,t=0,uoc[10000],somu[10000]={0},m=0,j=2;
    for(ll i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            uoc[t]=i;
            k*=i;
            while (a%i==0)
            {
                somu[t]++;
                a/=i;
            }
            m=max(somu[t],m);
            t++;
        }
    }
    if(k>=m) return k;
    for (ll i=0;i<t;i++)
    {
        while (uoc[i]*k*j<m) j++;
    }
    while (m>k*j)
    {
        j++;
        m/=k;
    }
    return k*j;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("power.inp","r",stdin);
    freopen("power.out","w",stdout);
    while (scanf("%lld",&a)!=EOF) cout<<process()<<endl;
    return 0;
}
