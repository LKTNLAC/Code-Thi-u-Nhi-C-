#include <bits/stdc++.h>
using namespace std;



long long i,n,k;
long long  x[1000001];
long long check(long long n)
{
    long long s,m;
    s=0;
    m=0;
    while(n>0)
    {
        s=s+n%10;
        m=m+1;
        n=n/10;
    }
    s=s%m;
    return (s) ;
}
void solve()
{
    k=0;
    i=1;
    while (k<=1000000)
    {
        if(check(i)==0)
        {
            k=k+1;
            x[k]=i;

        }
        i=i+1;
    }
}
void input()
{
    while ( cin>>n)
    {
        cout<<x[n]<<endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bnums.inp","r",stdin);
    freopen("bnums.out","w",stdout);
    solve();
    input();
    return 0;
}
