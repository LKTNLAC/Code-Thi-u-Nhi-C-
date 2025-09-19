//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long a,b;
bool lucky(long n)
{
    while(n!=0)
    {
        if(abs(n%10)==0){
            return true;
            n/=10;
        }
    }
    return false;
}
void solve()
{
    cin>>a;
    b=1;
    while (lucky(a+b)==false)
        b++;
    cout<<b;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lucky.inp","r",stdin);
    freopen("lucky.out","w",stdout);
    solve();
    return 0;
}

