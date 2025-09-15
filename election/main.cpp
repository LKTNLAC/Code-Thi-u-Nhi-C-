#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("election.INP");
ofstream cout("election.OUT");
long long a[100001],b[100001];
long n,m,i,j,x,y,z;

void solve()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        x=1;
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
            if(a[j]>a[x])
                x=j;
        }
        b[x]++;
    }
    for(i=1;i<=n;i++)
        if(b[i]>b[x])
            x=i;
    cout<<x;
}
int main()
{
    solve();
    return 0;
}
