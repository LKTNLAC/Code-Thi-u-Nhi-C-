//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n;
long i;
long cs(long long n)
{
    long i;
    i=0;
    while(n>0)
    {
        i++;
        n=n/10;
    }
    return(i);
}
long long up(long long n)
{
    long i,c;
    long long cnt,d;
    c=cs(n);
    d=1;
    cnt=0;
    for(i=1;i<=c-1;i++)
    {
        cnt=cnt+9*d*i;
        d=d*10;
    }
    cnt=cnt+(n-d+1)*c;
    return(cnt);
}
void input()
{
    cin>>n;
}
void output()
{
    cout<<up(n);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("seqlen.inp","r",stdin);
    freopen("seqlen.out","w",stdout);
    input();
    output();
    return 0;
}
