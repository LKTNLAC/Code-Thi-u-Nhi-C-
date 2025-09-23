#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,i;
    cin>>n>>m;
    vector <long>a[10000];
    for(i=1;i<=m;i++)
    {
        long u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(i=1;i<=m;i++)
    {
        cout<<i<<": ";
        long j;
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

}
