//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long n,p,i,tmp;
string s[10],t;
void input()
{
    for(i=0;i<10;i++)
    {
        cin>>s[i];
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        t="";
        if(p==0)
        {
            cout<<s[0]<<endl;
            continue;
        }
        while(p>0)
        {
            tmp=p%10;
            if(s[tmp]>=t)
                t=s[tmp];
            p=p/10;
        }
        cout<<t<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("lingvo.inp","r",stdin);
    freopen("lingvo.out","w",stdout);
    input();
    //output();
    return 0;
}

