#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long i,j,n;
double minn=100000000.0,cap[1000001],v[1000001],x[1000001];
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
        double max1=max(x[i],x[j]),min1=min(x[i],x[j]),max2=max(v[i],v[j]),min2=min(v[i],v[j]);
        if((x[i]>x[j])&&(v[i]>v[j])||(x[i]<x[j])&&(v[i]<v[j]))
            cap[k]=-1;
        else/*
        if(max2==min2)
            cap[k]=0;
        else */cap[k]=(max1-min1)/(max2-min2);
        k++;
        if((cap[k-1]<minn)&&(cap[k-1]!=-1))
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
