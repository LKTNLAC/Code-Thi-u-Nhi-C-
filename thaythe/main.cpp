#include <bits/stdc++.h>

using namespace std;

int n,m,s,f,i,u,v,dem=0,luudem,truyvet[100001],p,a,b,r;

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

                q.push(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("thaythe.inp","r",stdin);
    freopen("thaythe.out","w",stdout);
    cin>>n>>p;
    cin>>a>>b>>r;
    for(i=0;i<=p-1;i++)
    {
        dsk[i].push_back((i+a)%p);
        dsk[i].push_back((i+b)%p);
        dsk[i].push_back((i+a+b)%p);
        tham[i]=-1;
    }
    for(i=0;i<=p-1;i++){

        bfs((n+a)%p);
        bfs((n+b)%p);
        bfs((n+a+b)%p);

        dem++;
    }
    cout<<dem;
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
