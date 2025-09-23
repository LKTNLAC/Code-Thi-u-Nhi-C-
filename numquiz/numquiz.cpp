#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("numquiz.INP");
ofstream cout("numquiz.OUT");
long long n,i,j,x,u,sum;


long long lcd(long long a,long long b)
{
    long long temp;
    temp=b%a;
    while(temp!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return(a);

}
void solve()
{
    cin>>n;
    cin>>u;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        u=lcd(u,x);

    }
    cout<<u*n;
}



int main()
{
    solve();
    return 0;
}
