#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include<iostream>
#include <string.h>
#include <fstream>


using namespace std;

ifstream cin("mosaic.inp");
ofstream cout("mosaic.out");

long i,j,dem,s,w,h,n;
long x11[10001];
long y11[10001];
long x22[10001], y22[10001], d[10001][10001];



void input()
{
    cin>>w;
    cin>>h;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x11[i]>>y11[i]>>x22[i]>>y22[i];
    }

}

long encrust(long &x1, long &y1, long &x2, long &y2 )
{
    long i,j,tam;
    if (x1>x2)
    {
        tam=x1;
        x1=x2;
        x2=tam;
    }
    if (y1>y2)
    {
        tam=y1;
        y1=y2;
        y2=tam;
    }
    for(i=x1+1;i<=x2;i++)
        for(j=y1+1;j<=y2;j++)
        if (d[i][j]==0)
    {
        d[i][j]=1;
        s=s-1;
    }
    return(s);
}

long output()
{
    s=w*h;
    for(i=1;i<=n;i++)
        dem=encrust(x11[i],y11[i],x22[i],y22[i]);
    cout<<dem<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
