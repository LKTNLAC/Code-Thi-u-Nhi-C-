#include <bits/stdc++.h>
using namespace std;

bool tham[100000];
vector<int> kq;
vector<int> dsk[100000];

void dfs(long dinh)
{
    if(tham[dinh]==true) return;
    tham[dinh]=true;
    kq.push_back(dinh);
    for(int i=0;i<dsk[dinh].size();i++)
    {

        dfs(dsk[dinh][i]);

    }
}
int main()
{
    long n,m,i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        long u,v;
        cin>>u>>v;
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    dfs(1);/*
    for(i=1;i<=m;i++)
    {
        cout<<i<<": ";
        long j;
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
    for(i=0;i<n;i++)
        cout<<kq[i]<<" ";


}

