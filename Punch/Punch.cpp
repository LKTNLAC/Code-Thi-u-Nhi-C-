#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("punch.inp", "r", stdin);
    freopen("punch.out", "w", stdout);
    int n,m;
    cin >> n >> m;
    string s;
    cin>>s;
    vector<vector<pair<int, char>>> a(n);
    vector<int> cnt(m);
    for (int i = 0; i < n; i++)
    {
        int foo;
        cin>> foo;
        a[i].resize(foo);
        for (int j = 0; j < foo; j++)
        {

            cin >> a[i][j].first >> a[i][j].second;
            --a[i][j].first;
            ++cnt[a[i][j].first];

        }
    }
    if (*min_element(cnt.begin(), cnt.end()) == 0)
    {
        cout << -1 << '\n';
        return 0;

    }
    vector<vector<int>> at(m);
    vector<int> deg(n);
    vector<int> que;
    for (int i = 0; i < n;i++)
    {
        for(auto& p : a[i])
        {
            if(s[p.first] != p.second)
            {
                deg[i] +=1;
                at[p.first].push_back(i);
            }
        }
        if (deg[i] == 0)
        {
            que.push_back(i);
        }

    }
    for ( int b = 0; b < (int) que.size(); b++)
    {
        for ( auto& p : a[que[b]])
        {
            for (int i : at[p.first])
            {
                --deg[i];
                if(deg[i] == 0)
                {
                    que.push_back(i);
                }
            }
            at[p.first].clear();
        }
    }
    if ((int) que.size() < n)
    {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout<<" ";
        }
        cout << que[i] + 1;
    }
    cout << '\n';
    return 0;

}
