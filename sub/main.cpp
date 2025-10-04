//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long a[1011],b[1011],c[1011],i;
string u,v;
void input()
{
    cin>>u>>v;
    a[0]=u.size();
    b[0]=v.size();
    for(i=0;i<a[0];i++){
        a[i+1]=u[i]-48;
        }
    for(i=0;i<b[0];i++){
        b[i+1]=v[i]-48;
        }
}
void daomanga()
{
    long i,tam;
    for(i=1;i<=a[0]/2;i++)
    {
        tam=a[i];
        a[i]=a[a[0]-i+1];
        a[a[0]-i+1]=tam;
    }
}
void daomangb()
{
    long i,tam;
    for(i=1;i<=b[0]/2;i++)
    {
        tam=b[i];
        b[i]=b[b[0]-i+1];
        b[b[0]-i+1]=tam;
    }
}
void output()
{
    long maxx,i,nho;
    maxx=a[0];
    if(maxx<b[0])
        maxx=b[0];
    c[0]=maxx;
    nho=0;
    if((a[0]==b[0])&&(a[a[0]]<b[b[0]])||(a[0]<b[0]))
    {
        for(i=1;i<=c[0];i++)
        {
            c[i]=b[i]-a[i]-nho;
            if(c[i]<0)
            {
                nho=1;
                c[i]=c[i]+10;
            }else nho=0;
        }
        if(nho>0)
            c[0]=c[0]-1;
    }
    else
    {
        for(i=1;i<=c[0];i++)
        {
            c[i]=a[i]-b[i]-nho;
            if(c[i]<0)
            {
                nho=1;
                c[i]=c[i]+10;
            }
            else nho=0;
        }
        if(nho>0)
        {
            c[0]=c[0]-1;
        }
    }
    while(c[c[0]]==0) c[0]=c[0]-1;
    if (( a[0]==b[0] ) && (a[a[0]]<b[b[0]]) || ( a[0]<b[0] ))
        cout<<"-";
    for(i=c[0];i>=1;i--)
    {
        cout<<c[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sub.inp","r",stdin);
    freopen("sub.out","w",stdout);
    input();
    daomanga();
    daomangb();
    output();
    return 0;
}
