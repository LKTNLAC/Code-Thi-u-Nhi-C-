//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k,dem=0,maxx=-1;
long long i,a[10002],l[10002],t[10002];
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void qhd()
{
    long i,j,jmax;
    a[0]=-32768;
    a[n+1]=32767;
    l[n+1]=1;
    for(i=n;i>=0;i--)
    {
        jmax=n+1;
        for(j=i+1;j<=n+1;j++)
            if((a[j]>a[i])&&(l[j]>l[jmax]))
                jmax=j;
        l[i]=l[jmax]+1;
        //t[i]=jmax;
    }
}
void output()
{
    cout<<l[0]-2;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lis.inp","r",stdin);
    freopen("lis.out","w",stdout);
    input();
    qhd();
    output();
    return 0;
}
