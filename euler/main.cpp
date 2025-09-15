#include <bits/stdc++.h>

#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

vector<int> Euler(vector< list<int> > adj) {
    stack<int> S; // Danh sach de cu
    vector<int> E; // Mo hinh hoa chu trinh Euler
    S.push(1); //Bat dau tu dinh 1
    while(!S.empty()) {
        int x = S.top();
        if (!adj[x].empty()) {
            int y = *adj[x].begin(); // Lay y la dinh dau tien cua danh sach ke
            S.push(y);
            adj[x].remove(y);
            adj[y].remove(x);
        }
        else {
            S.pop();
            E.push_back(x);
        }
    }
    return E;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("euler.inp","r",stdin);
    freopen("euler.out","w",stdout);
    int n, m;
    int u[128], v[128];
    cin >> n >> m;
    vector< list<int> > adj(n + 1);
    for (int i = 1; i <= m; i++) {
        cin >> u[i] >> v[i];
        adj[u[i]].push_back(v[i]);
        adj[v[i]].push_back(u[i]);
    }
    vector<int> E = Euler(adj);
    for (int e : E) {
        cout << e << " ";
    }
}

