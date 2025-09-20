#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s,m;
char a[100005];
long long ans,cnt,dem=1;
void input()
{
	long i,s=0,l=0;
	cin>>n>>m;
}

void output()
{
    long flag=0,i=1;
    dem=(n-1)*(n-1)*(n-2)+n;
    if(dem>m)
        dem=m;
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("MP3.inp","r",stdin);
    freopen("MP3.out","w",stdout);
    input();
    output();
    return 0;
}
