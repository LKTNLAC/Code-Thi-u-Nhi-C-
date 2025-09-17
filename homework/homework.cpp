#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("homework.INP");
ofstream cout("homework.OUT");
long long a[100001],b[100001],t[100001],check[100001];
long minn,m,n;

void solve()
{
    cin>>n>>m;
    long i;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
    }
    for(i=1;i<=m;i++)
        cin>>a[i]>>b[i];
    long maxx,sum;
    for(i=1;i<=n;i++)
        check[i]=1;
    for(i=1;i<=m;i++)
        check[a[i]]=0;
    sum=0;
    for(i=1;i<=n;i++)
        sum=sum+t[i];
    maxx=0;
    for(i=1;i<=n;i++)
        if((check[i]==1)&&(maxx<t[i]))
        maxx=t[i];
    minn=sum-maxx;
    cout<<minn;
}
int main()
{
    solve();
    return 0;
}
