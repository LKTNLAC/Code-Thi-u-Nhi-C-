#include <bits/stdc++.h>
using namespace std;
long u,v;
bool tham[100000];
bool checku=false,checkv=false;
vector<int> kq;
vector<int> dsk[100000];

void dfs(long dinh)
{
    if(tham[dinh]==true) return;
    tham[dinh]=true;
    //kq.push_back(dinh);
    if(dinh==u)
        checku=true;
    if(dinh==v)
        checkv=true;
    for(int i=0;i<dsk[dinh].size();i++)
    {

        dfs(dsk[dinh][i]);

    }
}
int main()
{
    long n,m,i;
    cin>>n>>m>>u>>v;
    for(i=1;i<=m;i++)
    {
        long a,b;
        cin>>a>>b;
        dsk[a].push_back(b);
        dsk[b].push_back(a);
    }
    dfs(u);/*
    for(i=1;i<=m;i++)
    {
        //cout<<i<<": ";
        long j;
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
    if((checku==true)&&(checkv==true))
        cout<<"YES";
    else cout<<"NO";


}

