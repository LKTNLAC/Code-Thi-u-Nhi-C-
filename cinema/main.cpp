#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long n,s;
char a[100005];
long long ans,cnt,dem=1;
void input()
{
	long i;
	cin>>n;
	for(i=1;i<=n;i++)
        cin>>a[i];
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
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("cinema.inp","r",stdin);
    freopen("cinema.out","w",stdout);
    input();
    output();
    return 0;
}
