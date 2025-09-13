#include <bits/stdc++.h>

using namespace std;

int n,m,s,f,i,u,v,dem=0,luudem,truyvet[100001];

bool tham[100000];
vector<int> kq,diem;
vector<int> dsk[100000];

void dfs(int dinh)
{
    for(int i=0;i<dsk[dinh].size();i++)
    {
        int v=dsk[dinh][i];
        if(tham[v]==false){
            tham[v]=true;
            truyvet[v]=dinh;
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("dfs.inp","r",stdin);
    freopen("dfs.out","w",stdout);
    cin>>n>>m>>s>>f;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    tham[s]=true;
    dfs(s);
    vector<int> ans;

    for(int tam=f;tam!=s;tam=truyvet[tam]){
        ans.push_back(tam);
        if(tam==0){
            cout<<"not found";
            return 0;
        }
    }
    ans.push_back(s);

    for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i]<<" ";
    return 0;
}
/*
5 6 2 5
1 2
1 3
2 3
2 4
3 5
4 5














*/
