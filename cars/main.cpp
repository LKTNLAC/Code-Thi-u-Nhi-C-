#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1504;
int x[100000],i,j,v[100000],n;
float minn=1000000,cap[101];
void input()
{
	cin>>n;
	for(i=1;i<=n;i++)
        cin>>x[i]>>v[i];
}
void output()
{
    long i,dem=0,k=1;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        long max1=max(x[i],x[j]),min1=min(x[i],x[j]),max2=max(v[i],v[j]),min2=min(v[i],v[j]);
        cap[k]=(max1-min1)/(max2-min2);
        k++;
        if(cap[k-1]<minn)
            minn=cap[k-1];
    }

    cout << fixed << setprecision(5) << minn;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("cars.inp","r",stdin);
    freopen("cars.out","w",stdout);
    input();
    output();
    return 0;
}
