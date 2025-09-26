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
long a[10000],n,id,i;
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>id;
            a[id%10000]++;
    }
}

void output()
{
    long i,c=0;
    for(i=2010;i<=9999;i++)
    {
        if(a[i]>0)
            if(a[i]<=5)
                c=c+100;
            else c=c+100+a[i]-5;
    }
    cout<<c<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
