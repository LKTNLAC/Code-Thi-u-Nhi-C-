#include <bits/stdc++.h>
using namespace std;
#define MAX 20
long long a[1000001],n,k,i,j,dem=0;
void input()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
}
void output()
{

	for(i=1;i<=n;i++)
	{
	    for(j=i;j<=n;j++)
	    if(a[i]>2*a[j])
	        dem++;
	}
	cout<<dem;
}

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("arrange.inp","r",stdin);
    //freopen("arrange.out","w",stdout);
    input();
    //dequy(1);
    output();
    return 0;
}
