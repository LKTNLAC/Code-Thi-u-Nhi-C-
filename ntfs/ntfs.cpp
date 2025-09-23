//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("ntfs.INP");
ofstream cout("ntfs.OUT");
long long n,i,a[1000000],dem;
void input()
{
    cin>>n;
}
void output()
{
    dem=0;
    dem=n/4096*4;
    if(n %4096!=0)
        dem=dem+4;
    cout<<dem;

}
int main()
{
    input();
    output();
    return 0;
}
