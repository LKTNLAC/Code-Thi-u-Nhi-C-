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
ifstream cin("palnum.INP");
ofstream cout("palnum.OUT");
long long n;
void input()
{
    cin>>n;
}
long daonguoc(int x)
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
bool sdx(int k)
{
    int c,b,h;
    c=k;
    b=0;
    while (k>0)
    {
        h=k%10;
        k=k/10;
        b=b*10+h;
    }
    if (b==c) return true;
        else return false;
}
void output()
{
    long long i;
    n=n+daonguoc(n);
    while (sdx(n)== false)
    {
        if(sdx(n)==true)
        {
            cout<<n;
        }
        else
        {
            n=n+daonguoc(n);
        }
    }
    cout<<n;
}
int main()
{
    input();
    output();
    return 0;
}
