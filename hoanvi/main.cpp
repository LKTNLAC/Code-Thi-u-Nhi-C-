//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define max 20
using namespace std;
long long n,l,dem;
long Bool[max] = { 0 };
int a[max];
void input()
{
    cin>>n>>l;dem=0;
}
void xuat()
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void Try(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(!Bool[i])
        {
            a[k]=i;
            Bool[i]=1;
            if(k==n){
                dem=dem+1;
                if(dem==l)
                    xuat();
            }else
                Try(k+1);
            Bool[i]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("hoanvi.inp","r",stdin);
    freopen("hoanvi.out","w",stdout);
    input();
    Try(1);
    return 0;
}
