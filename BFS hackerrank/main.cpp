#include <bits/stdc++.h>

using namespace std;

int n,m,s,f,i,u,v,dem=0,luudem,truyvet[100001];

bool tham[100000];
vector<int> kq,diem;
vector<int> dsk[100000];


void bfs(int dinh)
{
    queue<int> q;
    q.push(dinh);
    tham[dinh] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        //tham[u]=true;
        for (int i=0;i<dsk[u].size();i++)
        {
            int v=dsk[u][i];
            if(!tham[v])
            {
                tham[v]=true;
                truyvet[v]=u;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bfs.inp","r",stdin);
    freopen("bfs.out","w",stdout);
    cin>>n>>m>>s>>f;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    bfs(s);
    vector<int> ans;

    for(int tam=f;tam!=s;tam=truyvet[tam]){
            cerr<<tam<< ' ';
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
8 7 1 5
1 2
1 3
2 3
2 4
3 5
4 6
7 8














*/
