
#include <bits/stdc++.h>
using namespace std;
//ifstream cin("trip.INP");
//ofstream cout("trip.OUT");

long A[100001],n,d,ans;

void solve()
{
    ans = 0;
    long i = 1, j=n;
    while (i<=j)
    {
        if (A[i]+A[j]<=d)++i;
        --j;++ans;
    }
    cout<<ans<<endl;

}
void input()
{
    while(cin>>n)
    {
        memset(A,0,sizeof(A));
        cin>>d;
        for (long i=1;i<=n; ++i)
            cin >> A[i];
        sort(A+1,A+n+1);
        solve();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("Trip.inp","r",stdin);
    freopen("trip.out","w",stdout);
    input();
    return 0;
}
