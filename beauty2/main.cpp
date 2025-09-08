#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxx=0,dem=1,b[1000000],A[10000000];
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

}
bool check(long n)
{
    long i,tong=0,tam=0;
    while(n>0)
    {
        tam=n%10;
        tong=tong+tam*tam;
        n=n/10;
    }
    if(A[tong]==true)
    return true;
    else return false;
}
void solve()
{
    long i,j,cs=0,dem=1;
    for(i=11;i<=10000;i++)
    {
        if(check(i)==true)
        {
            b[dem]=i;
            dem++;
        }
    }
}
void input()
{
    long i,j;
    while (cin>>n)
    {

        cout<<b[n]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("beauty2.inp","r",stdin);
    freopen("beauty2.out","w",stdout);
    taosangnt();
    solve();
    input();
    //output();
    return 0;
}
