#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include<iostream>
#include <string.h>
#include <fstream>
#include <windows.h>

using namespace std;

ifstream cin("polygon.inp");
ofstream cout("polygon.out");

long a[100001],b[100001],c[100001],x[100001],y[100001],n,i,j,k,minn,l;


long timsobe(long l, long r)
{
    long i;
    minn=2000000000;
    for (i=l;i<=r;i++)
        if (minn>x[i])
        minn =x[i];
        return minn;

}
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        for (j=1;j<=a[i];j++)
             cin>>x[j]>>y[j];
        b[i]=timsobe(1,a[i]);
        c[i]=b[i];
    }

}

void xep(long a[100001],long i, long j)
{
    long c;
    c=b[i];
    b[i]=b[j];
    b[j]=c;
}
void sortt(long l, long r)
{
    long i,j,x;
    i=l;
    j=r;
    x=b[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (b[i]<x)
            i=i+1;
        while (b[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}


long output()
{
    sortt(1,n);
    if (n%2==0)
        k=round(n/2);
    else k=n/2+1;
    for(i=1;i<=n;i++)
        if (b[k]==c[i])
            l=i;
    cout<<l<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
