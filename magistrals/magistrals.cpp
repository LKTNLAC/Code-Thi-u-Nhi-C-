//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long c[1000001],b[1000001],a[1000001],q,w,e,r,i,n,m;
double minn,calc,pi=3.1415926535897932385;
double circle(long i, long j)
{
    return(i*2*pi*abs(j)/360000000);
}
void input()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>c[i];
    }
    cin>>q>>w;
    cin>>e>>r;
    minn=1000000000;
    for(i=1;i<=n;i++)
    {
        if(b[i]>=0)
        {
            calc=circle(a[i],(c[r]+360000000-c[w])%360000000)+abs(a[q]-a[i])+abs(a[e]-a[i]);
            if(minn>calc)
                minn=calc;
        }
        if(b[i]<=0)
        {
            calc=circle(a[i],(c[w]+360000000-c[r])%360000000)+abs(a[q]-a[i])+abs(a[e]-a[i]);
            if(minn>calc)
                minn=calc;
        }
    }
    cout << setprecision(16)<< fixed;
    cout<<minn<<"0000";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("magistrals.inp","r",stdin);
    freopen("magistrals.out","w",stdout);
    input();
    //output();
    return 0;
}
