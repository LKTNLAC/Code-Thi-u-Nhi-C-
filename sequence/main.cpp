//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n,a[10000000];
long i,luui,maxx;

void input()
{
    luui=1;
    maxx=-1;
    while(cin>>n)
    {
        a[luui]=n;
        if(maxx<n)
            maxx=n;
        luui++;
    }
}
void output()
{
    long sum=-1;
    for(i=1;i<=maxx;i++)
    {
        sum=sum+2;
    }
    /*for(i=1;i<=luui;i++)
    {
        cout<<
    }*/
    cout<<sum;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sequence.inp","r",stdin);
    freopen("sequence.out","w",stdout);
    input();
    output();
    return 0;
}
