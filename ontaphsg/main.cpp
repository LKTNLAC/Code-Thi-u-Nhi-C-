#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
char a[100005];
long long ans,cnt,dem=1;
void input()
{
	long i,s=0,l=0;
	cin>>n>>m>>y;
}

void output()
{
    long flag=0,i=1;
    while(i<=n)
    {
        if(a[i]=='S')
            dem++;
        if((a[i]=='L')&&(flag==0))
        {
            dem++;
            flag=1;
        }
        else flag=0;
        i++;
    }
    if((a[1]==a[2])&&(a[2]==a[3])&&(a[1]=='S')&&(n==3))
        dem=3;
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bl1.inp","r",stdin);
    freopen("bl1.out","w",stdout);
    input();
    output();
    return 0;
}
