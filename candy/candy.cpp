//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
#define maxn 1010
using namespace std;
//long long n,m,i,a[100001];
void output()
{
    int n,t=0,f[10001],d[10001];
	cin>>n;
	int a[n+1];
	for (int i=1;i<=n;i++)
	   {
	   	cin>>a[i];
	   	t=t+a[i];
	   }
	t=t/2;
//QHD
	for (int i=1;i<=t;i++)
	{
        f[i]=INT_MAX;
        for (int j=1;j<=n;j++)
	      if (i>=a[j] && j>f[i-a[j]])
	      {
	      	f[i]=j;
	      	break;
		  }
	}

//Truyvet
	while (f[t] > n)
        t--;
	while (t > 0)
	{
		d[f[t]]=1;
		t=t-a[f[t]];
	}
	long left=0,right=0;
	for (int i=1;i<=n;i++)
	   if (d[i]==1)
            left=left+a[i];
	for (int i=1;i<=n;i++)
		if (d[i]!=1)
            right=right+a[i];
		cout<<abs(left-right);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("candy.inp","r",stdin);
    //freopen("candy.out","w",stdout);
    //input();
    //output();
    //cout << min(1, 2LL);
    cout<<LLONG_MAX;
    return 0;
}
