//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long b[10000001],i,j,n,h,l,dem;
bool a[10000001];
void input()
{
    cin>>n>>h;
}
void taosangnt()
{
    for (i=1;i<=10000000;i++)
        a[i]=true;
    a[1]=false;
    for(i=2;i<=10000000;i++)
    {
        if(a[i]==true)
            for(j=i;j<=10000000/i;j++)
                a[i*j]=false;
    }
}
long tcs(long m)
{
    long s,k;
    s=0;
    while(m!=0)
    {
        k=m%10;
        m=m/10;
        s=s+k;
    }
    return(s);
}
void output()
{
    dem=0;
    for(i=h;i<=n;i++)
    {
        if((a[i]==true)&&(tcs(i)==h))
        {
            dem=dem+1;
            b[dem]=i;
        }
    }
    cout<<dem<<endl;
    for(i=1;i<=dem;i++)
    {
        cout<<b[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("hprime.inp","r",stdin);
    freopen("hprime.out","w",stdout);
    input();
    taosangnt();
    output();
    return 0;
}
