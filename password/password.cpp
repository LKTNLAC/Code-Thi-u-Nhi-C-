#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("password.INP");
ofstream cout("password.OUT");
long a[1000001],b[1000001],sum[1000001],m,n,x,y;

long tongscs(long n)
{
    long s;
    s=0;
    while (n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return(s);
}
void input()
{
    long i,s;
    cin>>n;
    memset(b,0,sizeof(b));
    m=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        s=tongscs(a[i]);
        if(b[s]==0)
        {
            b[s]=i;
            m=m+1;
            sum[m]=s;
        }
    }


}


int output ()
{
    long  i,j,minn;
    minn=1000;
    for (i=1;i<=m-1;i++)
        for (j=i+1;j<=m;j++)
        if (abs(sum[i]-sum[j])<minn)
        {
            minn=abs(sum[i]-sum[j]);
            x=a[b[sum[i]]];
            y=a[b[sum[j]]];
        }
    cout<<x<<y;
}


int main()
{
    input();
    output();
    return 0;
}
