#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("friends.INP");
ofstream cout("friends.OUT");
long long n,k,dem,i,j,a[1000001];

void solve()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dem=0;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i]+a[j]==k)
                dem++;
        }
    }

    cout<<dem;
}
int main()
{
    solve();
    return 0;
}

