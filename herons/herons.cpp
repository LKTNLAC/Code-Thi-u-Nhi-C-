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
    long maxx=max(low,high);
    long minn=min(low,high);
    if (maxx%2==1) maxx=maxx/2+1;
    else maxx=maxx/2;np
    cout<<maxx<<" "<<minn;
}
int main()
{
    input();
    output();
    return 0;
}
