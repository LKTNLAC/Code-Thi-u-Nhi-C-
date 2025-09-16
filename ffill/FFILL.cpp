#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 2e6+2;

int m, n, par[MAXN], sze[MAXN], cnt, mx = 1;
char a[1005][1005];
bool col[MAXN];

struct TNode
{
    int val;
    TNode *next;
    TNode(int val): val(val) {next = 0;}
    ~TNode() {if (next) next->~TNode();}
};
class TList
{
public:
    TNode *begin, *end;
    TList(): begin(0), end(0) {}
    void Clear()
    {
        if (begin) begin->~TNode();
        begin = end = 0;
    }
    void push_back(int val)
    {
        if (begin) end->next = new TNode(val), end = end->next;
        else begin = new TNode(val), end = begin;
    }
    void Merge(TList &b)
    {
        if (!b.begin) return;
        if (begin)
        {
            end->next = b.begin;
            end = b.end;
        }
        else begin = b.begin, end = b.end;
    }
};

TList g[MAXN];

int Parent(int x) {return par[x] = (par[x] == x ? x : Parent(par[x]));}
bool Union(int x, int y)
{
    int a = Parent(x), b = Parent(y);
    if (a == b) return false;

    par[b] = a;
    sze[a] += sze[b];
    mx = max(mx, sze[a]);
    g[a].Merge(g[b]);

    return true;
}

inline int Conv(int x, int y) {return (x-1) * n + y;}
inline bool Valid(int x, int y) {return x >= 1 && x <= m && y >= 1 && y <= n;}

void Prep()
{
    for (int i = 1; i <= m*n; ++i) 
        par[i] = i, sze[i] = 1, col[i] = a[(i-1) / n + 1][(i-1) % n + 1] == 'B';
    cnt = n*m;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int self = Conv(i, j);
            if (Valid(i-1, j))
            {
                int up = Parent(Conv(i-1, j));
                if (a[i-1][j] == a[i][j]) cnt -= Union(up, self), self = Parent(self);
                else g[up].push_back(self), g[self].push_back(up);
            }
            if (Valid(i, j-1))
            {
                int le = Parent(Conv(i, j-1));
                if (a[i][j-1] == a[i][j]) cnt -= Union(le, self), self = Parent(self);
                else g[le].push_back(self), g[self].push_back(le);
            }
        }
}

void Solve()
{
    int q;
    scanf("%d",&q);
    for (int i = 0, x, y, pos; i < q; ++i)
    {
        char ch[3]; bool cc;
        scanf("%s%d%d",ch,&x,&y); cc = ch[0] == 'B'; pos = Parent(Conv(x, y));
        if (col[pos] != cc)
        {
            vector<int> b;
            for (TNode *i = g[pos].begin; i != 0; i = i->next)
            {
                b.push_back(i->val);
                if (i == g[pos].end) break;
            }
            if (g[pos].begin) g[pos].Clear();
            for (int i = 0; i < (int) b.size(); ++i)
                if (col[pos] != col[Parent(b[i])]) cnt -= Union(pos, b[i]);
            col[pos] = cc;
        }
        printf("%d %d\n",cnt,mx);
    }
}

int main()
{
    const int DEBUG = 0;
    if (!DEBUG)
    {
        freopen("FFILL.inp","r",stdin);
        freopen("FFILL.out","w",stdout);
    }
    scanf("%d%d",&m,&n);
    for (int i = 1; i <= m; ++i) scanf("%s",a[i]+1);
    Prep();
    Solve();
    return 0;
}
