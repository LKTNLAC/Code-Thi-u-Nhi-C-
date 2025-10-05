//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long n,m;
long long i,j,a[1001][1001],f[1001][1001];
void input()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++);
            cin>>a[i][j];
}
void output()
{
    for(i=1;i<=m;i++)
        f[i][0]=0;
    for(j=1;j<=n;j++)
        f[0][j]=0;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
    cout<<f[m][n];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("turtle.inp","r",stdin);
    freopen("turtle.out","w",stdout);
    input();
    output();
    return 0;
}
