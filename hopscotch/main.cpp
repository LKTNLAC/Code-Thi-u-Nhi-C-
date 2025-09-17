#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long long i,j,n,a[4],d,e,f,m,s;
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
void input()
{
    cin>>n;
    m=n-1;
    for(i=1;i<=n;i++)
        cin>>k[i]
    vector <long>a[10000];
    for(i=1;i<=m;i++)
    {
        long u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cin>>s;
    for(i=1;i<=m;i++)
    {
        cout<<i<<": ";
        long j;
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void output()
{
    long i,dem=0,x,y,z,tich=1;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    input();
    output();
    return 0;
}
