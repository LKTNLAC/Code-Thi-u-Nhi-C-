#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxk=0,dem=0;
long long w[100001],s[100001],weight[100001],k[100001];

void input()
{
    long i,j;
    cin>>n;
    for (i=1; i <=n ;i++)
    {
        cin>>w[i]>>s[i];
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>k[i];
        maxk=max(maxk,k[i]);
    }
}
void solve()
{
    long i,j,maxw=0,id=0;
    for(i=1;i<=maxk;i++)
    {
        maxw=0;
        id=j;
        for(j=1;j<=n;j++)
        {
            weight[j]=w[j]+s[j]*k[i];
            if(maxw<weight[j])
            {
                maxw=weight[j];
                id=j;
            }
        }
        k[i]=id;
    }
    for(i=1;i<=n;i++)
        cout<<k[i]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("melons.inp","r",stdin);
    freopen("melons.out","w",stdout);
    input();
    solve();
    return 0;
}
