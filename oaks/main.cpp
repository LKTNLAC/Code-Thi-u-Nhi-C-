#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1504;
int h[100000],i,id[100000],n;
void input()
{
	cin>>n;
	for(i=1;i<=n;i++)
        cin>>h[i];
}
void output()
{
    long i,dem=0;
    for(i=2;i<n;i++)
    {
        if(((h[i-1]<h[i])&&(h[i+1]<h[i]))||((h[i-1]>h[i])&&(h[i+1]>h[i])))
        {
            dem++;
            id[dem]=i;
        }
    }
    cout<<dem<<endl;
    for(i=1;i<=dem;i++)
    {
        cout<<id[i]<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("oaks.inp","r",stdin);
    freopen("oaks.out","w",stdout);
    input();
    output();
    return 0;
}
