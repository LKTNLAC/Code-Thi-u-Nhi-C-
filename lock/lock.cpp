#include <iostream>
#include <stdio.h>
using namespace std;
int n,k,p1,p2,v1,v2,ans;

int main()
{
    freopen("lock.inp","r",stdin);
    freopen("lock.out","w",stdout);
    cin>>n>>k>>p1>>v1>>p2>>v2;
    if(p1>p2)
    {
        swap(p1,p2);
        swap(v1,v2);
    }
    int d=p2-p1;
    d%=3;
    if(d==0)
    {
        if(v1==v2) cout<<max(0,k-v1-1);
        else cout<<0;
    }
    else
    {
        if(v1+v2>=k) cout<<0;
        else cout<<1;
    }
    return 0;
}

