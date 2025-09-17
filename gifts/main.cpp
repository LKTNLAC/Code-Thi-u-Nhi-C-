#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("gifts.INP");
ofstream cout("gifts.OUT");
long long a[100001],b[100001];
long n,m,i,j,x,y,z;

void solve()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]=i;
    }
    x=1;
    for(i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
int main()
{
    solve();
    return 0;
}
