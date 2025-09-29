#include <bits/stdc++.h>

using namespace std;

int n, m;

long power(long n)
{
    long i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            long s=i;
            for(long j =2;j<=i;j++)
            {

                s=s*i;
            }
            if(s>n)
                return i;
        }
    }
    return n;
}
void input() {
    while(cin>>n)
    {
        cout<<power(n)<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("power.inp","r",stdin);
    freopen("power.out","w",stdout);
    //taosangnt();
    input();

}
