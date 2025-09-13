//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
//#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("cond.INP");
ofstream cout("cond.OUT");
long long n,i,low,high;
string s;
void input()
{
    cin>>low>>high;
    cin>>s;
}

void output()
{
    long long bai;
    if(s=="freeze")
    {
        cout<<min(low,high);
    }
    if(s=="heat")
    {
        cout<<max(low,high);
    }
    if(s=="auto")
    {
        cout<<high;
    }
    if(s=="fan")
    {
        cout<<low;
    }
}
int main()
{
    input();
    output();
    return 0;
}
