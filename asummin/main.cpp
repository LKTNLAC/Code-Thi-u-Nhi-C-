#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("asummin.INP");
ofstream cout("asummin.OUT");
long m,n,i,j,k,a[10001],b[10001],s[20002],luui,luuj,minn;
long long diffmin;
bool e;

void input()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cin>>b[i];
}/*
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
            xep(a,i,j);


            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}*/
void solve()
{
    k=1;
    minn=1000000;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
    {
        s[k]=abs(a[i]+b[j]);
        if(s[k]<minn)
        {
            minn=s[k];
            luui=i;
            luuj=j;
        }
        k=k+1;
    }
    //sortt(s[1],s[k-1]);
}

void output()
{
    long i;
    cout<<luui<<" "<<luuj;
}

int main()
{
    input();
    solve();
    output();
    return 0;
}
