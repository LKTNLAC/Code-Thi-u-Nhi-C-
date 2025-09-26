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
ifstream cin("park.INP");
ofstream cout("park.OUT");
long a[i],b,dem;
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
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
