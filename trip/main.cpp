#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
//ifstream cin("trip.INP");
//ofstream cout("trip.OUT");
int i,n,d,j,tong;

long  m[100001];

void input()
{
    freopen("trip.inp","r",stdin);
    while(scanf("%d %d ",&n, &d )!=EOF );
    {

        for (i=1;i<=n;i++)
            scanf("%d",&m[i]);
    }

}
void xep(long &a ,long &b)
{
    long c;
    c=a;
    a=b;
    b=c;
}
void sortt(long l, long r)
{
    long i,j,s;
    i=l;
    j=r;
    s=m[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (m[i]<s)
            i=i+1;
        while (m[j]>s)
            j=j-1;
        if (i<=j)
        {
            xep(m[i],m[j]);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}

int output ()
{
    long  i;
    sortt(1,n);
    tong=0;
    i=1;
    j=n;
    while (i<=j)
        if ((m[i]+m[j]<=d)&&(i!=j)) i=i+1;
    j=j-1;
    tong=tong+1;
    while(scanf("%d %d ",&n, &d )!=EOF );
    {
        printf("\n",tong);
    }

}
int main()
{
    input();

    output();
    return 0;
}
