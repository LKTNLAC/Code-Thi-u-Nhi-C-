//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long a[40001],n;
void input()
{
    cin>>n;
}

void output()
{
    long i,dem,d,nho;
    a[1]=1;
    nho=0;
    d=1;
    dem=1;
    while(dem<=n)
    {
        for(i=1;i<=d;i++)
        {
            a[i]=a[i]*2+nho;
            if(a[i]>=10)
            {
                nho=a[i]/10;
                a[i]=a[i]%10;
            }
            else nho=0;
        }
        if(nho>0)
        {
            d=d+1;
            a[d]=nho;
            nho=0;
        }
        dem=dem+1;
    }
    for(i=d;i>=1;i--)
        cout<<a[i];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("luythua2.inp","r",stdin);
    freopen("luythua2.out","w",stdout);
    input();
    output();
    return 0;
}
