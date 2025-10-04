#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
long long a[10001];
long cs(long x)
{
    long long dem = 0;
    while (x > 0)
    {
        x = x / 10;
        dem++;
    }
    return(dem);

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sotrang.inp","r",stdin);
    freopen("sotrang.out","w",stdout);
    long dem = 0, tong = 0, i;
    cin>>n;

    for(i = 4; i <= n+3; i++)
    {
        tong = tong + cs(i);
        a[i] = tong;
    }

    for(i = 4; i <= n+3; i++)
    {
        if(a[i] == n)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
//4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35
//1 2 3 4 5 6 8  10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58
