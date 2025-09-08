//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long a,b,c,d;
void input()
{
    cin>>a>>b>>c>>d;
}
long ucln(long x, long y)
{
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else y=y-x;
    }
    return(x);

}
void output()
{
    long chia,tu,mau;
    if (b*d == 0)
        cout<<-1;
    else
    {
        tu=a*d+b*c;
        mau=b*d;
    }
    chia=ucln(tu,mau);
    tu=tu / chia;
    mau=mau / chia;
    cout<<tu<<" "<<mau;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    input();
    output();
    return 0;
}
