#include <bits/stdc++.h>

using namespace std;

int n, k, flag, source;

struct Fenwick
{
    int n;
    vector<int> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}
    void add(int i, int delta){
        for (i++; i<=n; i+= i & -i)
        {
            bit[i] += delta;
        }
    }
    int sum(int i){
        int res = 0;
        for (i++; i>0; i -= i & -i)
        {
            res += bit[i];
        }
        return res;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("exercise.inp","r",stdin);
    freopen("exercise.out","w",stdout);
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Fenwick pre(n + 1);

    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        pre.add(a[i],1);
        Fenwick suf(n + 1);
        for ( int j = n - 1; j >= i + 1; j--)
        {
            suf.add(n - a[j] + 1, 1);
            int i0 = pre.sum(a[i]);
            int j0 = n - suf.sum(n - a[j] + 1);
            ans += max({j+1 - i0, j0 - i-1, abs(a[j] - a[i])});
        }
    }
    cout << ans << "\n";
}
