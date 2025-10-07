//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long lmax;
long n,k,wires[100001];
bool a[10000001];
bool check(long long m)
{
    long i;
    long long countt;
    countt=0;
    for(i=1;i<=n;i++)
        countt=countt+wires[i]/m;
    return(countt>=k);
}
long long binsearch(long long lo, long long hi)
{
    long long res,mi;
    res=0;
    while(lo<=hi)
    {
        mi=(lo+hi)/2;
        if(check(mi))
        {
            lo=mi+1;
            res=mi;
        }
        else hi=mi-1;
    }
    return(res);
}
void input()
{
    long i;
    long long s;
    //cin>>n>>k;
    s=0;
    for(i=1;i<=n;i++)
    {
        cin>>wires[i];
        s=s+wires[i];
    }
    lmax=s/k;
}
void output()
{
    long long l;
    while (cin>>n)
    {
        cin>>k;
        input();
        l=binsearch(1,lmax);
        cout<<l;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("wires.inp","r",stdin);
    freopen("wires.out","w",stdout);
    //input();
    //taosangnt();
    output();
    return 0;
}
