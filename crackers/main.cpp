#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("crackers.INP");
ofstream cout("crackers.OUT");
long long a[10001][10001],i,j,r,c;
void input()
{
    cin>>r>>c;
    for (i=1;i<=r;i++)
        for (j=1;j<=c;j++)
        cin>>a[i][j];
}
long sortt(long long x, long long y)
{
    long long z;
    if (x>=y)
        z=y;
        else z=x;
    return (z);
}

void output()
{
    long long dem;
    dem=0;
    i=1;
        for(j=1;j<=c;j++)
            if(a[i][j]==0)
                a[i][j]=1;
            else a[i][j]=0;/*
        for(i=1;i<=r;i++)
            if (a[i][j]==0)
                a[i][j]=1;
            else a[i][j]=0;*/
    //for (i=1;i<=r;i++)
        for (j=1;j<=c;j++)
        {
            if(a[1][j]==a[2][j])
                    if(a[1][j]==1)
                    {
                        a[1][j]=0;
                        a[2][j]=0;
                    }

        }
    for (i=1;i<=r;i++)
        for (j=1;j<=c;j++)
            if(a[i][j]==0)
                dem=dem+1;
    cout<<dem;
}
int main()
{
    input();
    output();
    return 0;
}
