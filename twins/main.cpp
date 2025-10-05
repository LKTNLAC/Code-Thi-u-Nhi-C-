//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long n,k;
bool a[10000001];
void input()
{
    long i;
    cin>>n>>k;
}
void taosangnt()
{
    int i,j;
    for (i=1;i<=10000000;i++)
        a[i]=true;
    a[1]=false;
    for (i=2;i<=10000000;i++)
        if (a[i]==true)
        {
            for (j=i;j<=10000000/i;j++)
                a[i*j]=false;
        }

}
void output()
{
    long i,dem;
    dem=0;
    for(i=2;i<=n-k;i++)
    {
        if((a[i]==true)&&(a[i+k]==true))
            dem=dem+1;
    }
    cout<<dem;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("twins.inp","r",stdin);
    freopen("twins.out","w",stdout);
    input();
    taosangnt();
    output();
    return 0;
}
