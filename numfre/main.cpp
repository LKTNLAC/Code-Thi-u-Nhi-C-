//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("numfre.INP");
ofstream cout("numfre.OUT");
long long n,i,a,b,dem;
void input()
{
    cin>>a>>b;
}
long daonguoc(long x)
{
    long s,du;
    s=0;
    while(x!=0)
    {
        du=x%10;
        s=s*10+du;
        x=x/10;
    }
    return(s);
}
long ucln(long x, long y)
{
    long du;
    while(du!=0)
    {
        du=x%y;
        x=y;
        y=du;
    }
    return(x);
}
void output()
{
    for(i=a;i<=b;i++)
    {
        if(ucln(i,daonguoc(i))==1)
            dem++;
    }
    cout<<dem;

}
int main()
{
    input();
    output();
    return 0;
}
