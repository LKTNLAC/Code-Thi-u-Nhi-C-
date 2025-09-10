#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("candies.INP");
ofstream cout("candies.OUT");
//const ceil = 2*1e6;
long long n,c;
bool res;
long long a[2000001];

void input()
{
    cin>>n;
    c=2000001;
}
void init()
{
    long long x,y,z,i;
    for(i=1;i<=c;i++)
    {
        x=i;
        y=i+1;
        z=i+2;
        a[i]=x*y*z/6;
    }
}
long long tknp(unsigned long long int x, long long l, long long r)
{
    long long i,j,mid;
    i=l;
    j=r;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(a[mid]==x)
            return(mid);
        if(a[mid]>x)
            j=mid-1;
        if(a[mid]<x)
            i=mid+1;
    }
    return(0);
}
bool solve()
{
    long long i,b;
    if(n==0)
        return(true);
    for(i=1;i<=c;i++)
    {
        if(a[i]>n)
        {
            b=tknp(a[i]-n,1,i-1);
            if(b!=0)
                return(true);
        }
    }
    return(false);
}
void output()
{
    res=solve();
    if(res==true)
        cout<<"YES";
    else cout<<"NO";

}
int main()
{
    input();
    init();
    output();
    return 0;
}
