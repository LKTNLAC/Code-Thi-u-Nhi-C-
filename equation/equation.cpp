#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("equation.INP");
ofstream cout("equation.OUT");
long a,b,c,l,m,kq[1000001];
bool e;

void input()
{
    cin>>a>>b>>c;
}

void solve()
{
    long i,j;
    long long s,p,d;
    for(i=1;i<=81;i++)
    {
        d=0;
        p=i;
        for(j=2;j<=a;j++)
            p=p*i;
        s=p*b+c;
        m=s;
        while(m!=0)
        {
            d=d+m%10;
            m=m/10;
        }
        if ((s-p*b-c==0)&&(s<1000000000)&&(d==i))
        {
            l=l+1;
            kq[l]=s;
            e=true;
        }
    }
}

void output()
{
    long i;
    if (e==true)
    {
        for (i=1;i<=l;i++)
            cout<<kq[i]<<endl;
    }
    else cout<<"No solution"<<endl;
}

int main()
{
    input();
    solve();
    output();
    return 0;
}
