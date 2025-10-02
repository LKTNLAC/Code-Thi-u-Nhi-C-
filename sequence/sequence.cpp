//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n,a[10000000],b[10000000];
long i,luui,maxx;
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
long daonguoc(long n)
{
    long kq=0,tam,c;
    while(n>0)
    {
        tam=n%10;
        n=n/10;
        kq=kq*10+tam;
    }
    return(kq);
}
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
    long sum=-1,c;
    for(i=1;i<=82;i++)
    {
        c=cs(i);
        if(sum>0)
            sum=daonguoc(sum);
        sum=sum+2;
        b[i]=sum;
    }
    for(i=1;i<=luui-1;i++)
    {
        if(a[i]%81==0)
            cout<<b[81];
        else if(a[i]%81==1)
            cout<<b[82];
        else
            cout<<b[((a[i])%81)]<<endl;
    }
    /*
    for(i=1;i<=300;i++)
    {
        c=cs(i);
        if(sum>0)
            sum=daonguoc(sum);
        sum=sum+2;
        cout<<sum<<endl;
    }*/
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
