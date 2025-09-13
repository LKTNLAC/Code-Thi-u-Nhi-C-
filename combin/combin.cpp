//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k;
long long i;
void input()
{
    cin>>n>>k;
}
void output()
{
    /*unsigned long long tu,mau;
    tu=n;
    mau=k;
    for(i=1;i<k;i++)
    {
        tu=tu*(n-i);
        mau=mau*(k-i);
    }
    cout<<tu/mau;*/
    long long  a[700][700];
    if(k==0||k==n)
        a[k][n]=1;
    else for(long long i=0;i<=k;i++)
            for(long long j=i;j<=n;j++)
                if(i==0||i==j)
                    a[i][j]=1;
                else a[i][j]=a[i][j-1]+a[i-1][j-1];
    cout<<a[k][n];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("combin.inp","r",stdin);
    freopen("combin.out","w",stdout);
    input();
    output();
    return 0;
}
