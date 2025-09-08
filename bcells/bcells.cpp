//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long kq,m,n,c,r;
void output()
{
    cin>>m>>n>>c>>r;
    kq=m*n/2;
    if((m*n%2!=0)&&((r+c)%2==0))
        kq=kq+1;
    cout<<kq;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bcells.inp","r",stdin);
    freopen("bcells.out","w",stdout);
    //input();
    output();
    return 0;
}


