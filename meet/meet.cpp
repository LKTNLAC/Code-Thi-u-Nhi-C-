#include <bits/stdc++.h>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
ll n,m;
char maze [1001][1001];
ll visit[1001][1001];
vector<pair<ll,ll> > dot;
bool flag=false;
ll dx[]={1,-1,0,0}, dy[]={0,0,1,-1};
vector<char> direction;
pair<ll,ll> start, endd;
ll pre[1001][1001];
bool validcell(ll x,ll y)
{
    if(x >= 0 && x<n && y >= 0 && y < n)
        return true;
    else
        return false;
}
queue<pair<ll,ll> > Q;
void BFS(ll u, ll v)
{
    visit[u][v]=1;
    Q.push({u,v});
    ll f=0, second=0;
    while(!Q.empty())
    {
        f=Q.front().first, second=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll x=f+dx[i],y=second+dy[i];
            if(validcell(x,y))
            {
                if(visit[x][y]==0 && maze[x][y]=='1')
                {
                    visit[x][y]=1;
                    Q.push({x,y});
                    pre[x][y]=i+1;
                }
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("meet.inp","r",stdin);
    freopen("meet.out","w",stdout);
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>maze[i][j];
        }
    }
    start={0,0};
    endd={n-1,n-1};
    BFS(start.first,start.second);
    if(pre[endd.first][endd.second]!=0)
    {
        vector<char> direction;
        while(endd!=start)
        {
            ll i=pre[endd.first][endd.second];
            if(i==1) direction.push_back('D');
            if(i==2) direction.push_back('U');
            if(i==3) direction.push_back('L');
            if(i==4) direction.push_back('R');
            endd.first-=dx[i-1], endd.second-=dy[i-1];
        }
        reverse(direction.begin(),direction.end());
        if(direction.size()%2){cout<<-1; return 0;}
        ll t=direction.size()/2;
        cout<<t<<"\n";
        for(ll i=0;i<t;i++) cout<<direction[i];
        cout<<"\n";
        for(ll i=direction.size()-1;i>=t;i--) cout <<direction[i];
    }
    else cout<<-1;
    return 0;
}

