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
        for(j=1;j<=n;j++)
            cin>>a[i][j];
}
void output()
{
    memset(f,0,sizeof(f));
    f[m][1]=a[m][1];
    for (i=m-1;i>=1;i--)
        f[i][1]=f[i+1][1]+a[i][1];
	for (j=2;j<=n;j++)
        f[m][j]=f[m][j-1]+a[m][j];
    for(i=m-1;i>=1;i--)
        for(j=2;j<=n;j++)
            f[i][j]=max(f[i+1][j],f[i][j-1])+a[i][j];
    cout<<f[1][n];
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
