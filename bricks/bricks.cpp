//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long g,y,m,n,low,middle,high,sum,prod;
void output()
{
    cin>>g>>y;
    sum=g/2+2;
    prod=g+y;
    low=0;
    high=sum/2;
    while(low<=high)
    {
        middle=(low+high)/2;
        m=middle;
        n=sum-m;
        if((m>prod/n+1)||(m*n>=prod))
            high=middle-1;
            else low=middle+1;
    }
    m=low;
    n=sum-m;
    cout<<m<<" "<<n;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bricks.inp","r",stdin);
    freopen("bricks.out","w",stdout);
    //input();
    output();
    return 0;
}


