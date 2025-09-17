//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n,s[200001];
char a[100],b[100];
void input()
{
    cin>>n;
    gets(a);
    gets(b);

}

void output()
{
    long long maxx=0,dem=0,tam;
    for(long i=1;i<=n;i++)
    {
        for(long j=1;j<=n;j++)
        {
            if(a[j]==b[j])
                dem=dem+1;
        }
        if(dem>maxx) maxx=dem;
        dem=0;
        tam=0;
        for(long k=1;k<=n;k++)
        {
            tam=b[k];
            b[k]=b[k+1];
            if (k==1) b[n]=tam;
            else b[k-1]=tam;

        }
    }
    cout<<maxx;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("gen.inp","r",stdin);
    freopen("gen.out","w",stdout);
    input();
    output();
    return 0;
}


