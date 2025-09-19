//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k,dem=0,maxx=-1;
long long i,a[10000001];
void input()
{
    cin>>n;
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])
        {
            dem=dem+1;
        }
        else
        {
            if(maxx<dem)
            {
                maxx=dem;
            }
            dem=0;
        }
    }
}
void output()
{
    cout<<maxx;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lis.inp","r",stdin);
    freopen("lis.out","w",stdout);
    input();
    output();
    return 0;
}
