//#include <stdio.h>
//#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
//#include <iostream>

using namespace std;
ifstream cin("cut.INP");
ofstream cout("cut.OUT");
long long a,b,s,d,c,i,j;
float x1,x2;
void input()
{
    cin>>i>>j>>s;
}

void output()
{
    c=i*j-s;
    b=-i-j;
    a=1;
        d=b*b-4*a*c;
        if (d==0)cout<<-b/(2*a);
            else if(d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            if(x1-(int)x1!=0)
                cout<<"-1";
            else if(x2-(int)x2!=0)
                cout<<"-1";
            else if(x1>0)
                cout<<x1;
            else if(x2>0)
                cout<<x2;
            else cout<<"-1";
        }
}
int main()
{
    input();
    output();
    return 0;
}
