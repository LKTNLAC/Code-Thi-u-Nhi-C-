#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("divisor.INP");
ofstream cout("divisor.OUT");
long long n,a[51],k[51],c[100000001],maxx,dem,i,j,m;
bool b[100000001];

void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void taosangnt()
{
    int i,j;
    for (i=1;i<=10000000;i++)
        b[i]=true;
    b[1]=false;
    for (i=2;i<=10000000;i++)
        if (b[i]==true)
        {
            dem++;
            c[dem]=i;
            for (j=i;j<=10000000/i;j++)
                b[i*j]=false;
        }

}

void output()
{
    for(i=1;i<=n;i++)
    {
        k[i]=1;
        j=1;
        for(j=1;j<=dem;j++)
        {
            m=0;
            while (a[i]%c[j]==0)
            {
                a[i]=a[i]/c[j];
                m++;
            }
            k[i]=k[i]*(m+1);
        }
        if (a[i]>1)
            k[i]=k[i]*2;
    }
    for(i=1;i<=n;i++)
        cout<<k[i]<<endl;

}
int main()
{
    input();
    taosangnt();
    output();
    return 0;
}
