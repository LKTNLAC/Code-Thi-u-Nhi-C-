//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long m,n,k,ans;
void input()
{
    cin>>m>>n>>k;
}
void output()
{
    if((m<n-k)||(m/2<=n-k))
        ans=m/2;
    else if(m-k>=n*2)
        ans=n;
    else ans=(m+n-k)/3;
    cout<<ans;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lares.inp","r",stdin);
    freopen("lares.out","w",stdout);
    input();
    output();
    return 0;
}


