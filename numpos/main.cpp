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
ifstream cin("numpos.INP");
ofstream cout("numpos.OUT");
long n;
void input()
{
    cin>>n;
}
void output()
{
    long i,j,k,l;
    l=0;
    i=0;
    k=0;
    while(i!=n)
    {
        i++;
        l++;
        k++;
        if(k==3)
        {
            k=1;
            i=i-1;
        }
        if(i==n)
        {
            cout<<l+1;
            break;
        }
    }
}
int main()
{
    input();
    output();
    return 0;
}
