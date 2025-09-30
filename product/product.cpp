#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxk=0,dem=0;
long long k,p,i,l,r;
long long tichchuso(long long n)
{
    long long luun=n,dem=0,tich=1;
    while(luun>0)
    {
        tich=tich*(luun%10);
        luun=luun/10;
        dem++;
    }
    return tich;
}
bool check(long long n)
{
    long long dem,tich;
    tich=tichchuso(n);
    //cout<<tich<<endl;
    if(tich==0)
        return false;
    if(n%tich==0)
        return true;
    else return false;
}
void input()
{
    long i,j;
    cin>>l>>r;
}
void solve()
{
    long i;
    for(i=l;i<=r;i++)
    {
        if(check(i)==true){
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
    freopen("product.inp","r",stdin);
    freopen("product.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
