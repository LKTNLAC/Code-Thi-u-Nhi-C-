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
ifstream cin("parking.INP");
ofstream cout("parking.OUT");
long long n,m;
void input()
{
    cin>>n>>m;
}

void output()
{
    long long i,a=0;
    a=(n/2+n%2)*(m/2+m%2);
    cout<<a<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
