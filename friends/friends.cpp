//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
//#include <string.h>
//#include <fstream>

using namespace std;
long long n,b,s[200001];
void input()
{
    long i,x;
    memset(s,0,sizeof(s));
    cin>>n>>b;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s[x+200000]=s[x+200000]+1;
    }
}
long long solve()
{
    long long ans;
    ans=0;
    long i=0;
    while(i<=b-i)
    {
        if((b-i>=0)&&(b-i<=200000)){
            if((s[i]>0)&&(s[b-i]>0)){
                if(i!=b-i){
                    ans=ans+s[i]*s[b-i];}
                else ans=ans+s[i]*(s[i]-1)/2;}}
        i=i+1;
    }
    return(ans);
}
void output()
{
    long long kq=solve();
    cout<<kq;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("friends.inp","r",stdin);
    freopen("friends.out","w",stdout);
    input();
    output();
    return 0;
}


