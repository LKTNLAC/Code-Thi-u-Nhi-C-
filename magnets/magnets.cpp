//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("magnets.INP");
ofstream cout("magnets.OUT");
long long n,i,a[1000000],dem;
void input()
{
    cin>>n;
    dem=0;
    a[0]=-1;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i-1]%10!=a[i]%10)
            dem=dem+1;
    }
}
void output()
{
    int j;
    cout<<dem;

}
int main()
{
    input();
    output();
    return 0;
}
