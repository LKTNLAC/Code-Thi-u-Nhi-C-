//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long n,k,p1,p2,v1,v2,i,dem,a[100001],j,m,l;
void input()
{
    cin>>n>>k>>p1>>v1>>p2>>v2;
}
void output()
{
    a[p1]=v1;
    a[p2]=v2;
    dem=0;
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i]=a[i]+1;
            if(i==p1)a[i]=a[i]-1;
            if(i==p2)a[i]=a[i]-1;
            for(m=1;m<=n;m++)
            {
                a[i+1]=a[i+1]+1;
                if(i+1==p1)a[i+1]=a[i+1]-1;
                if(i+1==p2)a[i+1]=a[i+1]-1;
                for(l=1;l<=n;l++)
                {
                        a[i+2]=a[i+2]+1;
                        if(i+2==p1)a[i+2]=a[i+2]-1;
                        if(i+2==p2)a[i+2]=a[i+2]-1;
                        if((a[i]+a[i+1]+a[i+2])==k)dem=dem+1;
                }
            }
        }
    }
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lock.inp","r",stdin);
    freopen("lock.out","w",stdout);
    input();
    output();
    return 0;
}

