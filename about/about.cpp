#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("about.inp");
ofstream cout("about.out");
long n,k,dem,u,v,m,i,l,j;
char a[101][101];
void input()
{
    cin>>n>>k;
}
long uoc(long m)
{
    dem=1;
    for(l=1;l<=m/2;l++)
        if(m%l==0)
    {
        dem=dem+1;
    }return (dem);
}
void output()
{
    v=0;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            v=v+1;
            u=uoc(v);
            if(u<=k)
                a[i][j]='*';
            if(u>k)
                a[i][j]='.';
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main()

{

    input();
    output();
    return 0;
}
