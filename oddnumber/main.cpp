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
ifstream cin("oddnumber.INP");
ofstream cout("oddnumber.OUT");
long long n,a[5],i,j,b[5];
void input()
{
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
}
void output()
{
    long long i,x;
    x=a[1];
    for(i=1;i<=5;i++)
        {
           if(x!=a[i])
                b[i]=1;
        }
    for(i=1;i<=5;i++)
    {
        if(b[i]==1)
            cout<<a[i]<<" "<<i;
    }

}
int main()
{
    input();
    output();
    return 0;
}
