#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
long a,b,c,d,v,q,p,x,l,r;



/*
void output()
{
    long i,ucln,y,z;
    //x=-(b-d*v)/(a-v*c);
    //(a-v*c)x+(b-d*v)=0
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
    if((p!=0)&&(q==0)||((p==0)&&(q!=0)))
        cout<<"NONE"<<endl;
    else if((q==0)&&(p==0))
        cout<<"MULTIPLE"<<endl;
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
}*/
int input()
 {
	int a, b, c, d, v;

	while(cin >> a >> b >> c >> d >> v){
		if(a == b && b == c && c == d && d == 0){
			cout << "NONE"<<endl;
			continue;
		}

		int p = v * d - b;
		int q = a - v * c;

		if(!q){
			if(!p) cout << "MULTIPLE"<<endl;
			else cout << "NONE"<<endl;
		}
		else{
			if(a * p % q == 0 && b + a * p / q == 0) cout << "NONE"<<endl;
			else{
				if(q < 0) {q *= -1;
                    p *= -1;}
                {
                //l=sqrt(p*p);r=sqrt(q*q);
                l=abs(p);r=abs(q);
                //l=p;r=q;
				cout << "X = " << p / __gcd(l,r) << "/" << q / __gcd(l,r) << endl;
				}
			}
		}
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
