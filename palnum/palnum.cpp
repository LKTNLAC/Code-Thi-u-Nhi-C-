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
long long daonguoc(long long x)
{
    long long s,du;
    s=0;
    while(x!=0)
    {
        du=x%10;
        s=s*10+du;
        x=x/10;
    }
    return(s);
}
bool sdx(long long x)
{
    long long luux,b,so;
    luux=x;
    b=0;
    while (x>0)
    {
        so=x%10;
        x=x/10;
        b=b*10+so;
    }
    if (b==luux) return true;
        else return false;
}
void output()
{
    long long i;
    while (sdx(n)== false)
    {
            n=n+daonguoc(n);
    }
    cout<<n<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
