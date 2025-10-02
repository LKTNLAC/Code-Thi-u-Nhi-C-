#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;

long long a[100001],m,n,i,j;
void input()
{
    long i,j,b;
    cin>>m>>n;
  	for(i=1;i<=m;i++)
      cin>>a[i];

}
void xep(long a[100001],long i, long j)
{
    long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long l, long r)
{
    long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (a[i]<x)
            i=i+1;
        while (a[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(i,j);


            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}
void output()
{
    long dem=0;
  	for(i=1;i<=n;i++)
    {
      sort(1,m);
      dem=dem+a[m];
      a[m]=round(a[m]/2);
    }
}

int main()
{

    input();
    output();
}

