#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long m,n,maxx,dem=0;
long
 a[1001][1001];

void input()
{
    long i,j;
    cin>>m>>n;
    for (i=1; i <=m ;i++)
    {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
}
void checkarray()
{
    long i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j];
    }
    cout<<endl;
}
void spread(long y, long z)
{
    if (a[y][z] == 1)
    {
        dem++;
        a[y][z]=0;
        if (y>1) spread(y-1,z);
        if (y<m) spread(y+1,z);
        if (z>1) spread(y,z-1);
        if (z<n) spread(y,z+1);
    }
}
void solve()
{
    long i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (a[i][j]==1)
            {
                spread(i,j);
                //checkarray;
                maxx=max(dem,maxx);
                dem=0;
                //cout<<dem<<endl;
            }
        }
    }
    cout << maxx <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("areaone.inp","r",stdin);
    freopen("areaone.out","w",stdout);
    input();
    solve();
    return 0;
}
