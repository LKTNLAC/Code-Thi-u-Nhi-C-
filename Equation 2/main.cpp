#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
long a,b,c,d,v,q,p,x;




void output()
{
    long i,ucln,y,z;
    //x=-(b-d*v)/(a-v*c);
    p=-(b-d*v);
    q=(a-v*c);
    y=sqrt(p*p);
    z=sqrt(q*q);
    ucln=__gcd(y,z);
    if((y>0)&&(z>0))
    {
        p=p/ucln;
        q=q/ucln;
    }
    if(q<0)
    {
        q=sqrt(q*q);
        if(p<0)
            p=sqrt(p*p);
        else if(p>0)
            p=-p;
    }
    if((p!=0)&&(q==0))
        cout<<"NONE"<<endl;
    else if((q==0)&&(p==0))
        cout<<"Multiple"<<endl;
    else
        cout<<"X = "<<p<<"/"<<q<<endl;

}
void input()
{
    while(cin>>a)
    {
        cin>>b>>c>>d>>v;
        output();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("equation.inp","r",stdin);
    freopen("equation.out","w",stdout);
    input();
    //solve();
    //output();
    return 0;
}
