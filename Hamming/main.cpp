#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,i,maxk=0,dem=0;
long long a[100001],x[1000001],b[100001],c[100001];
bool A[1000001];
void input()
{
    long i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }

}/*
void taosangnt()
{
    int i,j;
    for (i=1;i<=10000000;i++)
        A[i]=true;
    A[1]=false;
    for (i=2;i<=10000000;i++)
        if (A[i]==true)
        {
            for (j=i;j<=10000000/i;j++)
                A[i*j]=false;
        }

}*/
void solve()
{
    long long i,j=1;
    for(i=1;i<=100000;i++)
    {
        a[i]=i;
        while(a[i]%2==0)
            a[i]=a[i]/2;
        while(a[i]%3==0)
            a[i]=a[i]/3;
        while(a[i]%5==0)
            a[i]=a[i]/5;
        if((a[i]<=1))
        {
            b[j]=i;
            c[j]=j;
            j++;
        }
    }

}
void output()
{
    long long i,j,maxw=0,flag=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if(x[i]==b[j]) {
                cout<<c[j]<<endl;
                flag=1;
                break;
            }
            if(flag==0)
                cout<<"Not in sequence"<<endl;
            flag=0;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("hamming.inp","r",stdin);
    freopen("hamming.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
