//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long n,dem=0,maxx=0,i;
string a,b;
long match(string a, string b)
{
    for(long j=0;j<=n-1;j++)
    {
        if(a[j]==b[j])
            dem=dem+1;
    }
    return(dem);
}
void output()
{
    cin>>n;
    cin>>a>>b;
    for(i=0;i<=n;i++)
    {
        maxx=max(maxx,match(a,b));
        b.push_back(b[0]);
        b.erase(0,1);
        dem=0;
    }
    cout<<maxx;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("gen.inp","r",stdin);
    freopen("gen.out","w",stdout);
    //input();
    output();
    return 0;
}


