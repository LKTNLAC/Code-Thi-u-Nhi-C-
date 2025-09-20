//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
struct mang {
    long so[2011];
};
//long long a[2011],b[2011],c[2011],i;
mang a,b,c;
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
mang congmang(mang a, mang b)
{
    c[0]=max(a[0],b[0]);
    nho=0;
    for(i=1;i<=c[0];i++)
    {
        c[i]=a[i]+b[i]+nho;
        if(c[i]>9)
        {
            c[i]=c[i]%10;
            nho=1;
        }
        else nho=0;
    }
    if(nho>0)
    {
        c[0]=c[0]+1;
        c[c[0]]=1;
    }
    for(i=0;i<=c[0];i++)
        congmang[i]=c[i];
}
mang nhan1sovoimang(long k, mang a)
{
    long nho,i,d[2011];
    if (k>0)
    {
        nho=0;
        d[0]=a[0];
        for(i=1;i<=a[0];i++)
        {
            d[i]=a[i]*k+nho;
            if(d[i]>9)
            {
                nho=d[i]/10;
                d[i]=d[i]%10;
            }
            else nho=0;
        }
        if(nho>0)
        {
            d[0]=a[0]+1;
            d[d[0]]=nho;
        }
    }
    else
    {
        d[0]=1;
        d[1]=0;
    }
    memset(nhan1sovoimang,0,sizeof(nhan1sovoimang));
    for(i=0;i<=d[0];i++)
        nhan1sovoimang[i]=d[i];
}
void output()
{
    long maxx,i,nho;
    mang c,d;
    for(i=1;i<=a[0];i++)
    {
        c=nhan1sovoimang(a[i],b);
        d=congmang(d,c);
        b=nhan1sovoimang(10,b);
    }
    for(i=d[0];i>=1;i--)
        cout<<d[i];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("mul.inp","r",stdin);
    freopen("mul.out","w",stdout);
    input();
    daomanga();
    daomangb();
    output();
    return 0;
}
