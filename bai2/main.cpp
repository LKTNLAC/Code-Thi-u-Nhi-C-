//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long m,dem[27],id[27];
bool a[10000001];
string s;
void input()
{
    cin>>s;
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
    x=dem[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (dem[i]<x)
            i=i+1;
        while (dem[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(dem,i,j);
            xep(id,i,j);

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
    long i,flag=0,n;
    n=s.length();
    for(i=0;i<=n;i++)
    {
        id[i]=i;
        char ch=s[i];
        long check=int(ch)-64;
        dem[check]++;
    }
    sortt(1,26);
    for(i=1;i<=n;i++)
    {
        cout<<id[i]<<dem[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    input();
    output();
    return 0;
}
