#include <iostream>

using namespace std;
long i,n,m,j,a[10001][10001];
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++){
        int u, v;
        cin >> u >> v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for(i=1;i<=n;i++){
        a[i][i]=1;
    }
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}
