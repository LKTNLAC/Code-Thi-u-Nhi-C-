//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long n,k,i;
string str="";
void ketqua(long time, string chu)
{
    long i;
    for(i=1;i<=time;i++)
    {
        str=str+chu;
    }
}
void xuly(string s)
{
    long i;
    long long lan=1;
    for(i=1;i<=length(s);i++)
    {
        if((48<ord(s[i]))&&(ord(s[i])<58))
        {
            lan=ord(s[i])-48;
            //ketqua(lan);
            //lan=1;
        }
        else {
            ketqua(lan,s[i]);
            lan=1;
        }
    }
}
void input()
{
    //string s;
    long i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        xuly(s);
        cout<<str;
        str="";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("unzip.inp","r",stdin);
    freopen("unzip.out","w",stdout);
    input();
    //output();
    return 0;
}
