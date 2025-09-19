//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long n,i,j,a[100001],c[1000001];
char* b[10];
string x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
void input()
{
    for(i=0;i<=9;i++)
    {
        cin>>b[i];
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
long length(long x)
{
    long dem=0;
    while(x>0)
    {
        x=x/10;
        dem=dem+1;
    }
    return(dem);
}
char* print(long n)
{
    long dodai,so;
    char* maxx;

    dodai=length(n);
    so=0;
    maxx="";
    for(i=1;i<=dodai;i++)
    {
        c[i]=n%10;
        n=n/10;
        if(strcmp(b[c[i]],maxx)>0)
        {
            maxx=b[i];
            so=c[i];
        }

    }
    return(maxx);
}
void output()
{
    long n,k;
    for(i=1;i<=n;i++)
    {
        cout<<print(a[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lingvo.inp","r",stdin);
    freopen("lingvo.out","w",stdout);
    input();
    output();
    return 0;
}


