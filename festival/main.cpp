//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long a[10001],b[10001],c[10001],d[10001],g[10001],x,y,z,i,n;
void input()
{
    cin>>x>>y>>z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        a[i]*=x;
        b[i]*=y;
        c[i]*=z;
        d[i]=a[i]+b[i]+c[i];
        g[i]=i;
    }
}
void xep(long d[100001],long i, long j)
{
    long e,f;
    e=d[i];
    d[i]=d[j];
    f=g[i];
    g[i]=g[j];
    g[j]=f;
}
void sortt(long l, long r)
{
    long i,j,x;
    i=l;
    j=r;
    x=d[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (d[i]<x)
            i=i+1;
        while (d[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(d,i,j);


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
    sortt(1,n);
    long j=1;
    for(i=n-2;i<=n;i++)
        cout<<g[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("festival.inp","r",stdin);
    freopen("festival.out","w",stdout);
    input();
    output();
    return 0;
}/*
3 1 4   17 6  3 8
5 1 1   15 10 3 2
2 3 2   17 4  9 4
3 2 3   18 6  6 6
2 3 2   17 4  9 4
1 4 1   16 2 12 2 */
