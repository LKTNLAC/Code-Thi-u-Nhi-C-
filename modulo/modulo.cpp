//#include <stdlib.h>
//#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
//#include <fstream>

using namespace std;
long long n,k;
long long bigmod(string s)
{
    long i;
    long long res=0;
    for(i=0;i<=s.length()-1;i++){
        char ch=s[i];
        res=(res*10+int(ch)-48)%k;
    }
    return(res);
}
void input()
{
    string s;
    long i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        cout<<bigmod(s)<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("modulo.inp","r",stdin);
    freopen("modulo.out","w",stdout);
    input();
    //output();
    return 0;
}
