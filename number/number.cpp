//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k,dem=0,maxx=-1;
long long i,j,a[101][101];
/*
void phantich(int i)
{
      for(int j=x[i-1];j<=((n-t[i-1])/2);j++)
      {
            x[i]=j;
            t[i]=t[i-1]+j;
            phantich(i+1);
      }
      x[i]=n-t[i-1];
      dem=dem+1;
}*/
void output()
{
    cin>>n;
    for(k=1;k<=n;k++)
        a[0][k]=1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++) a[i][k]=a[i][k-1]+a[i-k][k];
        for(k=i+1;k<=n;k++) a[i][k]=a[i][k-1];
    }
    cout<<a[n][n];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    //input();
    //qhd();
    output();
    return 0;
}
