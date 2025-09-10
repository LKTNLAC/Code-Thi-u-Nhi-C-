
#include <bits/stdc++.h>

#include <vector>
#include <cstring>
using namespace std;

int n, m;
vector<int> a[10005];
int cnt = 0, low[10005], num[10005], diem[10005];
int points = 0, bridges = 0;

void dfs(int u, int p) {
    int children = 0;
    num[u] = low[u] = cnt++;
    for(int i = 0; i < a[u].size(); ++i) {
        int v = a[u][i];       //for(auto v: a[u])
    //for(int v : a[u]) {
        if (num[v] == -1) {
            children++;
            dfs(v, u);

            // u đỉnh
            if (low[v] >= num[u])
                //diem[u] = (u == p) ? (children > 1) : 1;
                if(u==p)
                    diem[u] = (children > 1);
                else diem[u] = 1;

            // u-v cầu
            if (low[v] > num[u]) bridges++;

            low[u] = min(low[u], low[v]);
        } else if (v != p)
            low[u] = min(low[u], num[v]);
    }
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bridge.inp","r",stdin);
    freopen("bridge.out","w",stdout);

    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    memset(num, -1, sizeof num);
    memset(low, 0, sizeof low);
    memset(diem, 0, sizeof diem);
    for(int u = 1; u <= n; u++)
        if (num[u] == -1) dfs(u, u);
    for(int u = 1; u <= n; u++) points += diem[u];

    cout << points << ' ' << bridges;

    return 0;
}
