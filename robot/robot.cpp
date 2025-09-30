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
ifstream cin("robot.INP");
ofstream cout("robot.OUT");
long x1,z,x2,y2,x3,y3,i,ans,n;

bool turnright(long x1, long z, long x2, long y2, long x3, long y3)
{
    bool flag=false;
    if ((x1 < x2) && (y2 > y3)) flag = true;
    if ((z > y2) && (x2 > x3)) flag = true;
    if ((x1 > x2) && (y2 < y3)) flag = true;
    if ((z < y2) && (x2 < x3)) flag = true;
   return(flag);
}
void output()
{
    cin>>n>>x1>>z>>x2>>y2;
    for(i=3;i<=n;i++)
    {
        cin>>x3>>y3;
        if (turnright(x1,z,x2,y2,x3,y3)==true)
            ans++;
        x1 = x2;
        z = y2;
        x2 = x3;
        y2 = y3;
    }
    cout<<ans;
}
int main()
{
    output();
    return 0;
}
