#include <bits/stdc++.h>

using namespace std;

int n,m,s,f,i,u,v,dem=0,luudem,truyvet[100001],vung=0;

bool tham[100000];
vector<int> kq,diem;
vector<int> dsk[100000];


void bfs(int dinh)
{
    //vung++;
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

void dfs(long dinh)
{
    if(tham[dinh]==true) return;
    tham[dinh]=true;
    //kq.push_back[dinh];
    for(int i=0;i<dsk[dinh].size();i++)
        dfs(dsk[dinh][i]);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("traninfo.inp","r",stdin);
    freopen("traninfo.out","w",stdout);
    cin>>n;
    long u,v;
    while (cin>>u>>v)
    {
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    for(i=1;i<=n;i++){
        if(!tham[i]){
            bfs(i);
            vung++;
        }
    }
    cout<<vung;
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
