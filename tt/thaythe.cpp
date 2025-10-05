#include <bits/stdc++.h>

using namespace std;

#define long long long

const int maxN = 1e6 + 5;

bool tham[maxN];
int trace[maxN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("thaythe.inp","r",stdin);
    freopen("thaythe.out","w",stdout);
    int n,p,a,b,r;
    cin>>n>>p;
    cin>>a>>b>>r;
    queue<int> q;

    q.push((n + a) % p);
    tham[(n + a) % p] = 1;
    trace[(n + a) % p] = n;

    q.push((n + b) % p);
    tham[(n + b) % p] = 1;
    trace[(n + b) % p] = n;

    q.push((n + a + b) % p);
    tham[(n + a + b) % p] = 1;
    trace[(n + a + b) % p] = n;

    while (!q.empty()) //BFS
    {
        int m = q.front();
        q.pop();
        //cerr << m << '\n';
        tham[m] = 1;
        if (m == r) //found, compute path length and exit
        {
            int ans = 0;
            while (m != n)
                //cerr << m << '\n',
                m = trace[m], ++ans;
            cout << ans - 1;
            return 0;
        }
        int x = (m + a) % p;
        int y = (m + b) % p;
        int z = (m + a + b) % p;
        if (!tham[x]) trace[x] = m, q.push(x);
        if (!tham[y]) trace[y] = m, q.push(y);
        if (!tham[z]) trace[z] = m, q.push(z);
    }
    cout<<-1;//not found
    return 0;
}
/*
20 16
3 4 15

6 8
2 4 1
*/
