//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long v,a,b,d;
void input()
{
    cin>>a>>b>>v;
}
void output()
{
    if((v-b)%abs(a-b)==0)
        d=((v-b)/abs(a-b));
    else d=(((v-b)/abs(a-b)+1));
    cout<<d;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("snail.inp","r",stdin);
    freopen("snail.out","w",stdout);
    input();
    output();
    return 0;
}
