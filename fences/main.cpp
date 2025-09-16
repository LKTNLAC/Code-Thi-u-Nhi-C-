//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long m,n,kq;
void output()
{
    cin>>m>>n;
    kq=m*(n+1)+n*(m+1);
    cout<<kq;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("fences.inp","r",stdin);
    freopen("fences.out","w",stdout);
    //input();
    output();
    return 0;
}


