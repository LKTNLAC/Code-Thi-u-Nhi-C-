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
long long n;
void input()
{
    cin>>n;
}
void output()
{
    long long i,j,k,l;
    /*
    l=0;//123456789
    i=0;//123234345
    k=0;//123123123
    while(i!=n)
    {
        i++;
        l++;
        k++;
        if(i==n)
        {
            cout<<l;
            break;
        }
        if(k==3)
        {
            k=0;
            i=i-2;
        }
    }*/
    if(n==1) cout<<1;
    else if(n==2) cout<<2;
    else cout<<(n-2)*3;
}
int main()
{
    input();
    output();
    return 0;
}
