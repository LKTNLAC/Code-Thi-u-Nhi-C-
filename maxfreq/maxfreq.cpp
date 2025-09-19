#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("maxfreq.INP");
ofstream cout("maxfreq.OUT");
long long n,a[100001],maxx,dem,maxx1;
long i;
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void xep(long long a[100001],long long i, long long j)
{
    long long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long long l,long long r)
{
    long long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while(i<j)
    {
        while (a[i] < x) i=i+1;
        while (a[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a,i,j);
            //xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortt(i,r);
    if (l<j) sortt(l,j);
}
void output()
{
    sortt(1,n);
    maxx=-1000000000;
    maxx1=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
            dem=dem+1;
        else{
        if(maxx<dem)
        {
            maxx=dem;
            maxx1=a[i];
        }
        dem=0;
        }
    }

    cout<<maxx1;

}
int main()
{
    input();
    output();
    return 0;
}
