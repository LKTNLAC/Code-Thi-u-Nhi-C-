//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,m,i,a[100001];

void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void xep(long long a[100000],long long i, long long j)
{
    long long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long long l,long long r)
{
    long long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while(i<j)
    {
        while (a[i] < x) i=i+1;
        while (a[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a,i,j);
            //xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortt(i,r);
    if (l<j) sortt(l,j);
}
void output()
{
    long left=0,right=0;
    sortt(1,n);
    left=a[n];
    for(i=n-1;i>=1;i--)
    {
        if(left<right)
            left=left+a[i];
        else right=right+a[i];
    }
    cout<<abs(left-right);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("candy.inp","r",stdin);
    freopen("candy.out","w",stdout);
    input();
    output();
    return 0;
}
