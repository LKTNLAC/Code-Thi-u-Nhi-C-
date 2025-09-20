#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("MP3.inp","r",stdin);
    freopen("MP3.out","w",stdout);
    long long n,modulo;
    cin>>n>>modulo;
    vector<long long> res(2001,1);
    for(int i=2;i<=2000;i++)
        res[i]=(i*res[i-1]+(i-1)*res[i-2])% modulo;
    cout<<res[n-1];
}
