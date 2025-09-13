//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k,i,a[100001];
void input()
{
    cin>>n>>k;
}
void output()
{
    long tu,mau;
    tu=n;
    mau=k;
    for(i=1;i<k;i++)
    {
        tu=tu*(n-i);
        mau=mau*(k-i);
    }
    cout<<tu/mau;
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
