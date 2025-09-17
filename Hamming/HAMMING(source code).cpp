#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
long long INF = 1e18;
long long binPow(long long n, long long k)
{
    if(k == 0) return 1;
    long long v = binPow(n,k/2);
    if (k%2) return v*v*n;
    else return v*v;
}
vector<long long> a;
void Hamming()
{
    for(int i = 0; i <= 60;i++)
    {
        for(int j = 0; j <= 40;j++)
        {
            for(int k = 0; k <= 27;k++)
            {
                long long s1 = binPow(2,i);
                long long s2 = binPow(3,j);
                long long s3 = binPow(5,k);
                long long v = INF;
                v /= s1;
                v /= s2;
                v /= s3;
                if (v != 0) a.push_back(s1*s2*s3);
            }
        }
    }
    sort(a.begin(),a.end());
    //cout << a.size() << '\n';
    //cout << a[1] << '\n';
}
void solve()
{
    long long x;
    cin >> x;
    if (binary_search(a.begin(),a.end(),x))
    {
        int pos = lower_bound(a.begin(),a.end(),x) - a.begin() + 1;
        cout << pos << '\n';
    }
    else
    {
        cout << "Not in sequence\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("HAMMING.inp","r",stdin);
    freopen("HAMMING.out","w",stdout);
    Hamming();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
