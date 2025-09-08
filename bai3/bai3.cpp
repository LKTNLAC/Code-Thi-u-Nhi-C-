//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long m,n;
bool a[10000001];
void input()
{
    cin>>m>>n;
}
void taosangnt()
{
    int i,j;
    for (i=1;i<=10000000;i++)
        a[i]=true;
    a[1]=false;
    for (i=2;i<=10000000;i++)
        if (a[i]==true)
        {
            for (j=i;j<=10000000/i;j++)
                a[i*j]=false;
        }

}
bool ktdx(long x)
{
    long y,x1;
    y=x;
    while(x>0)
    {
        x1=x1*10+x%10;
        x=x/10;
    }
    if(x1==y)
        return true;
    else return false;
}
void output()
{
    long i,flag=0;
    taosangnt();
    for(i=m;i<=n;i++)
    {
        if((a[i]==true)&&(ktdx(i)==true))
        {
            cout<<i;
            flag=1;
        }
    }
    if(flag==0)
        cout<<0;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    input();
    output();
    return 0;
}
