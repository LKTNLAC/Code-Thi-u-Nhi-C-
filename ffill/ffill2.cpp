#include <bits/stdc++.h>

using namespace std;
#define MaxN 1001

const int DirX[4] = {1,-1,0,0}, DirY[4] = {0,0,1,-1};
bool arr[MaxN][MaxN], visit[MaxN][MaxN];
int n,m;

void Clear()
{
    for (int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            visit[i][j] = false;
}

bool Check(int i, int j, int ii, int jj, char c)
{
    if(i > n || i < 1 || j > m || j < 1) return false;
    if(visit[i][j]) return false;
    if(c == ' ') if (arr[ii][jj] != arr[i][j]) return false;
    if(c == 'B' || c == 'W') if (arr[ii][jj] == arr[i][j]) return false;
    return true;
}

bool Color(int i, int j, char c)
{
    visit[i][j] = true;
    if(c == 'B')
    {
        if(!arr[i][j])
        {
            arr[i][j] = true;
            return true;
        }else return false;
    }else if (c == 'W')
    {
        if (arr[i][j])
        {
            arr[i][j] = false;
            return true;
        }else return false;
    } else if (c == ' ')
    {
        return true;
    }
    return false;
}

queue<pair<int,int> > q;
int BFS(int i, int j, char c)
{
    while (!q.empty()) q.pop();
    q.push({i,j});
    int cnt = 0;
    while (!q.empty())
    {
        int u = q.front().first, v = q.front().second;
        q.pop();
        if (visit[u][v]) continue;
        cnt++;

        if (!Color(u,v,c)) continue;
        for (int t = 0; t <= 3; t++)
        {
            int x = u+DirX[t], y = v+DirY[t];
            if (!Check(x,y,u,v,c)) continue;
            q.push({x,y});
        }
    }
    return cnt;
}

void Print()
{
    std::cout << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j]) cout << 'B';
            else cout << "W";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void Count()
{
    Clear();
    int CntMax = 0, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j<= m; j++)
        {
            if (visit[i][j]) continue;
            CntMax = max(CntMax,BFS(i,j,' '));
            cnt++;
        }
    }
    std::cout << cnt << " " << CntMax << '\n';
}

signed main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    freopen("ffill.inp","r",stdin);
    freopen("ffill.out","w",stdout);
    std::cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char c;
            std::cin >> c;
            if (c == 'B') arr[i][j] = true;
            else arr[i][j] = false;
        }
    }
    int t;
    std::cin >> t;
    while (t--)
    {
        char c;
        int i,j;
        std::cin >> c >> i >> j;
        Clear();
        BFS(i,j,c);
        Count();
    }
    return 0;
}
