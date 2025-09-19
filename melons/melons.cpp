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
    if (n%3==0)
    for (i=1;i<=n;i=i+3)
        cin>>w[i]>>s[i]>>w[i+1]>>s[i+1]>>w[i+2]>>s[i+2]; //w là cân nặng ban đầu  s là tốc độ phát triển quả dưa này
    else if (n%2==0)
    for (i=1;i<=n;i=i+2)
        cin>>w[i]>>s[i]>>w[i+1]>>s[i+1]; //w là cân nặng ban đầu  s là tốc độ phát triển quả dưa này
    else for (i=1;i<=n;i++)
        cin>>w[i]>>s[i]; //w là cân nặng ban đầu  s là tốc độ phát triển quả dưa này

    cin>>m; // số ngày
    if(m % 3 == 0)
    for(i=1;i <= m; i=i+3)
            cin>>k[i]>>k[i+1]>>k[i+2];
    else if(m % 2 == 0)
    for(i=1;i<=m;i=i+2)
            cin>>k[i]>>k[i+1];
    else for(i=1;i<=m;i++)
            cin>>k[i];
}
void solve()
{
    long long i,j,maxw=0,id=0;
    for(i=1;i<=m;i++) // số m ngày
    {
        maxw=0;
        id=j;
        for(j=1;j<=n;j++)
        {
            weight[j]=w[j]+s[j]*k[i]; // công thức w=w0+s*k
            if(maxw<weight[j])
            {
                maxw=weight[j];
                id=j;                // id của dưa hấu
            }
        }
        k[i]=id;
    }
    for(i=1;i<=m;i++)
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
