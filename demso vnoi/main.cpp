#include <bits/stdc++.h>
using namespace std;
#define MAX 20
long long n,m,x,i,d=0,e=0;
void input()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    if(x<0)
	        d++;
	   else e++;

	}
	cout<<d<<" "<<e;
}


int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("arrange.inp","r",stdin);
    //freopen("arrange.out","w",stdout);
    input();
    //dequy(1);
    //output();
    return 0;
}
