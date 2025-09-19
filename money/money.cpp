//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long p[100001],q[100001],r[100001],g,s,k,tong,tien,n,a,b,c,i;
void input()
{
    cin>>g>>s>>k;
    cin>>n;
    tien=0;
    tong=g*17*29+s*29+k;
    for(i=1;i<=n;i++)
    {
        cin>>p[i]>>q[i]>>r[i];
        tien=p[i]*17*29+q[i]*29+r[i]+tien;
    }
}

void output()
{
    long long i,dem,d,nho;
    tong=tong-tien;
    if(tong<0)
        cout<<-1;
    else if(tong<29)
        cout<<0<<" "<<0<<" "<<tong;
    else if((tong>=29)&&(tong<29*17))
    {
        b=tong/29;
        c=tong%29;
        cout<<0<<" "<<b<<" "<<c;
    }
    else if(tong>=29*17)
    {
        a=tong/(17*29);
        b=(tong-a*17*29)/29;
        c=(tong-a*17*29)%29;
        cout<<a<<" "<<b<<" "<<c;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("money.inp","r",stdin);
    freopen("money.out","w",stdout);
    input();
    output();
    return 0;
}
