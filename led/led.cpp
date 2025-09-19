//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long d[]={6,2,5,5,4,5,6,3,7,6};
long minn[1000001],maxx[10000001];
bool checkvalid(long n, long k)
{
    if((k>=2*n)&&(k<=7*n))
        return(true);
    return(false);
}
void findmin(long n, long k)
{
    long i,j,q;
    for(i=1;i<=n;i++)
    {
        if(i==1) q=1;
        else q=0;
        for(j=q;j<=9;j++)
            if(checkvalid(n-i,k-d[j]))
                break;
        minn[i]=j;
        k=k-d[j];

    }
}
void findmax(long n, long k)
{
    long i,j;
    for(i=1;i<=n;i++)
    {
        for(j=9;j>=0;j--)
            if(checkvalid(n-i,k-d[j]))
                break;
        maxx[i]=j;
        k=k-d[j];

    }
}
void writearr(long a[10000001],long n)
{
    long i;
    for(i=1;i<=n;i++)
        cout<<a[i];
}
void solve()
{
    long n,k;
    cin>>n>>k;
    if(checkvalid(n,k)==false)
        cout<<"NO SOLUTION";
    else
    {
        findmin(n,k);
        findmax(n,k);
        writearr(minn,n);
        cout<<endl;
        writearr(maxx,n);
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("led.inp","r",stdin);
    freopen("led.out","w",stdout);
    solve();
    return 0;
}


