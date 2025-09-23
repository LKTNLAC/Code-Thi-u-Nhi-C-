//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
long long n,k,dem=0,maxx=-1;
long long i,j,x[101],t[101];
void input()
{
    cin>>n;
    x[0]=1;
    t[0]=0;
}

void phantich(int i)
{
      for(int j=x[i-1];j<=((n-t[i-1])/2);j++)
      {
            x[i]=j;
            t[i]=t[i-1]+j;
            phantich(i+1);
      }
      x[i]=n-t[i-1];
      dem=dem+1;
}
void output()
{
    //cout<<l[0]-2/**<  */;
    phantich(1);
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    input();
    //qhd();
    output();
    return 0;
}
