//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("sumdiv.INP");
ofstream cout("sumdiv.OUT");
long long m,dem,n,mu,a[50],k[50],s[50],c[100000000];
bool b[100000000];
long z,i,j;
void input()
{
    cin>>n;
    i=1;
    while(i<=n)
    {
        cin>>a[i];
        i++;
    }
}
void taosangnt()
{
    dem=0;
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
    taosangnt();
    for(i=1;i<=n;i++)
    {
        k[i]=1;
        for(j=1;j<=dem;j++)
        {
            mu=1;
            while(a[i]%c[j]==0)
            {
                a[i]=a[i]/c[j];
                mu=mu*c[j];
            }
            mu=mu*c[j];
            k[i]=k[i]*((mu-1)/(c[j]-1));
        }
    }
    i=1;
    while(i<=n)
    {
        cout<<k[i]<<endl;;
        i++;
    }

}
int main()
{
    input();
    output();
    return 0;
}
