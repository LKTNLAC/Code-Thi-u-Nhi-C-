//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long bk[100000001],type[100000001],a[100000001],n,m,i,j,p,q,u,v;
void input()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>bk[i]>>type[i];
    }
    for(j=1;j<=m;j++)
    {
        cin>>a[j];
        a[j]=a[j]/1000000;
    }
    cin>>p>>q>>u>>v;
}
void output()
{
    long goc=abs(a[q]-a[v]);
    long chieu,flag=0,duong=0,luui;
    if(q>v)
        chieu=1;
    else chieu=-1;
    for(i=n;i>=1;i--)
    {
        if((type[i]==chieu)&&(flag==0)){
            duong=duong+goc/360*3.14*bk[i]*2;
            luui=i;
            flag=1;}
    }
    duong=duong+abs(a[p]-a[luui])+abs(a[u]-a[luui]);

    cout << setprecision(4)<< fixed;
    cout<<duong;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("magistrals.inp","r",stdin);
    freopen("magistrals.out","w",stdout);
    input();
    output();
    return 0;
}
