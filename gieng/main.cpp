#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
char a[100005];
long long ans,cnt,dem=1,i,u=50000;

void output()
{
    for(i=0;i<=50;i++)
    {
        u=u+u*7/100;
    }
    cout<<u;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("bl1.inp","r",stdin);
    //freopen("bl1.out","w",stdout);
    //input();
    output();
    return 0;
}
