#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("friday.INP");
ofstream cout("friday.OUT");
long long n,k,dem,i,thuong,du;

void solve()
{
    cin>>n>>k;
    dem=0;
    thuong=n/7;
    du=n%7;
    for(i=1;i<=7;i++)
    {
        if(k==7){
            dem=dem+1;
            k=2;
        }
        else
        if(k+2>7)
            k=k+2-7;
        else k=k+2;
    }
    dem=dem*thuong;
    for(i=1;i<=du;i++)
    {
        if(k==7){
            dem=dem+1;
            k=2;
        }
        else
        if(k+2>7)
            k=k+2-7;
        else k=k+2;
    }

    cout<<dem;
}
int main()
{
    solve();
    return 0;
}

