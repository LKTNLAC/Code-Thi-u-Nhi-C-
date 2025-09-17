//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long m,n,kq,ans;
long i;
void output()
{
    cin>>n;
    kq=1;
    for(i=1;i<=n;i++)
        kq=kq*i;
    while(kq!=0)
    {
        ans=ans+kq%10;
        kq=kq/10;
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("function.inp","r",stdin);
    freopen("function.out","w",stdout);
    //input();
    output();
    return 0;
}


