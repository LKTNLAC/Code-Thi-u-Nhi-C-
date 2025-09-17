//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
//#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("herons.INP");
ofstream cout("herons.OUT");
long long n,i,low,high;
void input()
{
    cin>>low>>high;
}

void output()
{
    cout<<high/2<<" "<<low;
}
int main()
{
    input();
    output();
    return 0;
}
