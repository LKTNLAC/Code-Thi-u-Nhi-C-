#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long m,n;
char a[1001][1001];

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
    if (a[y][z] == '*')
    {
        a[y][z]='#';
        if (y>1) spread(y-1,z);
        if (y<m) spread(y+1,z);
        if (z>1) spread(y,z-1);
        if (z<n) spread(y,z+1);
    }
}
void solve()
{
    long i,j,dem=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (a[i][j]=='*')
            {
                spread(i,j);
                //checkarray;
                dem++;
                //cout<<dem<<endl;
            }
        }
    }
    cout << dem <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("area.inp","r",stdin);
    freopen("area.out","w",stdout);
    input();
    solve();
    return 0;
}
