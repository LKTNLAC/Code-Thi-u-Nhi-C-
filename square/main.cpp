//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define max 20
using namespace std;
long long n,m,i,j,a[1005][1005],f[1005][1005];
void input()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            f[i][j]=1;
        }
}

int minn(int a, int b, int c)
{
    a=min(a,b);
    return min(a,c);
}
void solve()
{
    int res=0;
    for(int i=2;i<=m;i++)
        for (int j=2;j<=n;j++)
        {
            if(a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1])
                f[i][j]=minn(f[i-1][j-1], f[i-1][j], f[i][j-1])+1;
            if(f[i][j]>res) res=f[i][j];
        }
        cout<<res*res;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("square.inp","r",stdin);
    freopen("square.out","w",stdout);
    input();
    solve();
    return 0;
}
