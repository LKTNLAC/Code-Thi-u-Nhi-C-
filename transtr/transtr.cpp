//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
string n,s,st;
long long i,m,code;
long long bigmod(string s)
{
    long i;
    long long res=0;
    for(i=0;i<=s.length()-1;i++){
        char ch=s[i];
        res=(res*10+int(ch)-48)%st.length();
    }
    return(res);
}
void input()
{
    long i;
    cin>>n>>st;
}
void output()
{
    i=0;
    m=bigmod(n);
    while(i!=m)
    {
        s=st.substr(0,1);
        st=st.erase(0,1);
        st=st+s;
        i++;
    }
    cout<<st;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("transtr.inp","r",stdin);
    freopen("transtr.out","w",stdout);
    input();
    output();
    return 0;
}
