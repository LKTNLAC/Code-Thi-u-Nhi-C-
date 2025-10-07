//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>
using namespace std;
long long m,n,c,r,d,k,p,i,j;
void input()
{
    cin>>m>>n>>i>>j>>c;
}
void output()
{
    d=m*n;
    k=i+j;
    if(d%2==0)
        p=2;
    if(d%2==1)
    {
        if((k%2==1)&&(c==0))
            p=1;
        if((k%2==0)&&(c==1))
            p=1;
        if((k%2==0)&&(c==0))
            p=0;
        if((k%2==1)&&(c==1))
            p=0;
    }
    if(p==0)
        cout<<"black";
    if(p==1)
        cout<<"white";
    if(p==2)
        cout<<"equal";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("w_b.inp","r",stdin);
    freopen("w_b.out","w",stdout);
    input();
    //taosangnt();
    output();
    return 0;
}
