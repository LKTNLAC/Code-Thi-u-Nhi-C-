#include <bits/stdc++.h>

using namespace std;

const int oo = 1000111000;
typedef pair<int, int> ii;

const int MaxN = 1 + 1e3, dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
vector<int> ans;
int n, m, a[MaxN][MaxN], mark[MaxN][MaxN];
int d[1000000];

int Loang(int color, int x, int y){
    int res = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    mark[x][y] = 1;
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        res++;
        for(int i = 0 ; i < 4 ; ++i)
        if(x + dx[i] > 0 && x + dx[i] <= n && y + dy[i] > 0 && y + dy[i] <= m && a[x + dx[i]][y + dy[i]] == color && !mark[x + dx[i]][y + dy[i]]){
            q.push({x + dx[i], y + dy[i]});
            mark[x + dx[i]][y + dy[i]] = 1;
            a[x + dx[i]][y + dy[i]] = color;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("ffill.inp","r",stdin);
    freopen("ffill.out","w",stdout);
    int p, q, m, w, o,i,j;
    char x;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cin>>x;
            if(x=='B')
                a[i][j] = 0;
            else a[i][j] = 1;
        }
    cin>>o;
    int color;
    for(i=1;i<=o;i++)
    {
        cin>>x>>p>>q;
        if(x=='B')
            color = 0;
        else color = 1;
        if(color == a[p][q]) ans.push_back(Loang(color,p, q));
        cout << ans.size() << " ";
        sort(ans.begin(), ans.end());
        int an;
        for(int i : ans)
            an = i;
        cout << an << endl;
    }

}
