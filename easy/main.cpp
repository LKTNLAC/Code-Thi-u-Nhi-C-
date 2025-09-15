
#include <bits/stdc++.h>

using namespace std;
long long n,a[10001][10001];
void input()
{
    long i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
}

void output()
{
    long i,tong=0;
    for(i=1;i<=n;i++)
    {
        tong=tong+a[i][i];
    }
    cout<<tong;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("diagonal.inp","r",stdin);
    freopen("diagonal.out","w",stdout);
    input();
    output();
    return 0;
}
