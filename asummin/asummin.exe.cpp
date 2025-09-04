#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("asummin.INP");
ofstream cout("asummin.OUT");
long m,n,resi,resj;
long long diffmin;
long long a[100000],id[100000];

void entera()
{
    long i;
    for(i=1;i<=m;i++)
    cin>>a[i];
}
void init()
{
    long i;
    for(i=1;i<=m;i++)
    id[i]=i;
    diffmin=long long(2e9)+long long(2e9)+1;
}


void xep(long a[100001],long i, long j)
{
    long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long l, long h)
{
    long i,j,pivot,idx;
    i=l+rand(h-l+1);
    pivot=a[i];
    a[i]=a[l];
    idx=id[i];
    id[i]=id[l];
    i=l;
    j=h;
    while(i!=j)
    {
        while((a[j]>pivot)&&(i<j)) j=j-1;
        if(i<j)
        {
            a[i]=a[j];
            id[i]=id[j];
            i=i+1;
        }else return;
        while((a[i]<pivot)&&(i<j))
            i=i+1;
        if(i<j)
        {
            a[j]=a[i];
            id[j]=id[i];
            j=j-1;
        }else return;
    }
    a[i]=pivot;
    id[i]=idx;
    sortt(l,i-1);
    sortt(i+1,h);
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

void findd(long j, long b)
{
    long low,middle,high;
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
        update(int64(b)=a[low-1],low-1,j);
    if (low<=m)
        update(a[low]-long long(b),low,j);
}
void enterb()
{
    long j,b;
    for(j=1;j<=n;j++)
    {
        cin>>b;
        findd(-b);
    }
}
void output()
{
    cout<<resi<<" "<<resj;
}

int main()
{
    entera();
    init();
    sortt(1,m);
    enterb();
    output();
    return 0;
}
