//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n,i,e,maxx,k,a[10000000],b[10000000];
void input()
{
    cin>>n;
    i=1;
    while(i<=n)
    {
        cin>>e;
        k=1;
        while(k<=e)
        {
            cin>>a[i];
            b[a[i]]=b[a[i]]+1;
            k++;
        }
        i++;
    }
}
void output()
{
    maxx=b[1];
    i=1;
    while(i<=n)
    {
        if(b[i]<b[i+1])
            maxx=b[i+1];
        i++;
    }
    long long j=1;
    while(j<=n)
    {
        if(maxx==b[j])
            cout<<j<<" ";
        j++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("idols.inp","r",stdin);
    freopen("idols.out","w",stdout);
    input();
    output();
    return 0;
}


