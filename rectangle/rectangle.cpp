//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,m,a[maxn][maxn],h[maxn],l[maxn],r[maxn],res;

void solve()
{
    cin>>m>>n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
            cin>>a[i][j];
    h[0]=-1;
    h[n+1]=-1;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
            h[j] = a[i][j] * (h[j] + 1);
        for (int j=1;j<=n;j++)
        {
            l[j] = j;
            while (h[l[j]-1] >= h[j])
                l[j] = l[l[j]-1];
        }
        for (int j=n;j>0;j--)
        {
            r[j] = j;
            while (h[r[j]+1] >= h[j])
                r[j] = r[r[j]+1];
        }
        for (int j=1;j<=n;j++)
            res = max(res,h[j]*(r[j]-l[j]+1));
    }
    cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("rectangle.inp","r",stdin);
    freopen("rectangle.out","w",stdout);
    solve();
    return 0;
}
