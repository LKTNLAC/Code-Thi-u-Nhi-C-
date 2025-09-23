#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long n,i,j,m,a[100][100],u,v;
int main()
{
    cin>>n>>m;

    for(int i = 1; i <= n; ++i) a[i][i] = 1;

    for(i=1;i<=m;i++){
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
