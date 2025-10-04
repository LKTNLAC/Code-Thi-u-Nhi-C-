//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long n,k,p1,p2;
void input()
{
    cin>>n>>k>>p1>>p2;
}
void output()
{
    cout<<min(k*p1, p2) * (n / k) + min((n % k) * p1,p2);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("tickets.inp","r",stdin);
    freopen("tickets.out","w",stdout);
    input();
    output();
    return 0;
}
