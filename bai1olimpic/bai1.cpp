//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long n,i,kq=0;
void input()
{
    cin>>n;
}
long chuso(long long m)
{
    long dem=0;
    while(m!=0)
    {
        dem=dem+1;
        m=m/10;
    }
    return dem;
}
long sodai(long long l)
{
    long i,kq=1;
    for(i=1;i<l;i++)
    {
        kq=kq*10;
    } return kq;
}
void output()
{
    long kq=0,luun=n,so=9,cs=chuso(n);
    long sochia=sodai(cs);
    if(n<=9)
        kq=n;
    else{

    for(i=1;i<cs;i++)
    {
        if(i!=1) so=so*10;
        kq=kq+so*i;
    }
    kq=kq+(n-sochia+1)*cs;
    }
    cout<<kq;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    input();
    output();
    return 0;
}
