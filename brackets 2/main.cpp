//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("brackets.INP");
ofstream cout("brackets.OUT");
long long n,i,a[100000],so;
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
    i=1;
    while(i<=n)
    {
        so=a[i]/2+1;
        int so1=so*2;
        for(int j=1;j<=so1;j++)
        {
            if(j<=so)
                cout<<"(";
            else if(j>so)
                     cout<<")";
        }
        i=i+so;
    }

}
int main()
{
    input();
    output();
    return 0;
}
