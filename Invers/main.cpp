#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxk=0,dem=0;
long long k,p,i,l,r,a[100000];

void input()
{
    long i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void solve()
{
    long i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        if(a[i]>a[j]){
            dem++;
            //cout<<check(i)<<endl;
            //cout<<i<<endl;
        }
    }
}
void output()
{
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("invers.inp","r",stdin);
    freopen("invers.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
