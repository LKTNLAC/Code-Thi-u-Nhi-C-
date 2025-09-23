#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <cmath>
//#include <bits/stdc++.h>
//#include <string.h>
#include <fstream>
//#include <iostream>
//#include <algorithm>
using namespace std;
ifstream cin("numfre.INP");
ofstream cout("numfre.OUT");
int a,b,dem;
void input()
{
    cin>>a>>b;
}
int daonguoc(int x)
{
    int s,du;
    s=0;
    while(x!=0)
    {
        du=x%10;
        s=s*10+du;
        x=x/10;
    }
    return(s);
}
int ucln(int x, int y)
{
    int du;
    while(y!=0)
    {
        du=x%y;
        x=y;
        y=du;
    }
    return(x);
}
void output()
{
    int i;
    dem=0;
    for(i=a;i<=b;i++)
    {
        if(ucln(i,daonguoc(i))==1)
            dem=dem+1;
    }
    cout<<dem<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
