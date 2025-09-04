/*#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>*/
#include <fstream>

using namespace std;

ifstream cin("asummin.INP");
ofstream cout("asummin.OUT");
long long a[100001],id[100001],m,n,resi,resj,diffmin;

void init()
{
    long long i;
    for(i=1;i<=m;i++)
    id[i]=i;
    diffmin=200000000000;
}

void sort(long long l, long long r)
{
    long long i,j,x,tem;
    i=l;
    j=r;
    x=a[(i+j)/2];
    while(i<j)
    {
        while(a[i]<x) i=i+1;
        while(a[j]>x) j=j-1;
        if(i<=j)
        {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
            tem=id[i];
            id[i]=id[j];
            id[j]=tem;
            i=i+1;
            j=j-1;
        }
    }
    if(l<r)
        sort(i,r);
    if(l<j)
        sort(l,j);
}
void update(long long asum, long i, long j)
{
    if(diffmin>asum)
    {
        diffmin=asum;
        resi=id[i];
        resj=j;
    }
}

void findd(long long j,long long b)
{
    long long low,middle,high;
    low=1;
    high=m;
    while (low<=high)
    {
        middle=(low+high)/2;
        if (a[middle]<b)
            low=middle+1;
        else high=middle-1;
    }
    if (low>1)
        update(b-a[low-1],low-1,j);
    if (low<=m)
        update(a[low]-b,low,j);
}
void input()
{
    long i,j,b;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        cin>>a[i];
    init();
    sort(1,m);
    for(j=1;j<=n;j++)
    {
        cin>>b;
        findd(j,-b);
    }
}
void output()
{
    cout<<resi<<" "<<resj;
}

int main()
{

    input();
    output();
}

