#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("conseq.INP");
ofstream cout("conseq.OUT");
long long p;
long chuso(long long int n)
{
    long cnt;
    p=1;
    cnt=0;
    while(n>0)
    {
        cnt++;
        n=n/10;
        p=p*10;
    }
    return(cnt);
}
long long int maxlen(long long int w, long long int m, long long int k)
{
    long long len,d;
    long n;
    w=w/k;
    len=0;
    n=chuso(m);
    while (true)
    {
        d=n*(p-m);
        if (w<d)
            break;
        len=len+(p-m);
        w=w-d;
        m=p;
        p=p*10;
        n++;
    }
    return(len+w/n);
}
void solve()
{
    long long int w,m,k;
    cin>>w>>m>>k;
    cout<<maxlen(w,m,k);
}
int main()
{
    solve();
    return 0;
}
