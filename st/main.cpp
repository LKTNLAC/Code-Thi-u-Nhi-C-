#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
long long a[10001];
void input()
{
	long i;
	cin>>n;
}
long cs(long x)
{
    long long dem=0;
    while (x>0)
    {
        x=x/10;
        dem++;
    }
    return(dem);

}
void solve()
{
    long dem=0,tong=0,i;
    for(i=4;i<=n+3;i++)
    {
        tong=tong+cs(i);
        a[i]=tong;
    }
}
void output()
{
    long i;
    for(i=4;i<=n+3;i++)
    {
        if(a[i]==n)
        {
            cout<<i;
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("st.inp","r",stdin);
    freopen("st.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
//4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
//1 2 3 4 5 6 8  10 12 14 16 18 20 22 24
