#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <istream>
#include <fstream>

using namespace std;
ifstream cin("frog.inp");
ofstream cout("frog.out");
long n,i,k,j,l,m;
void input()
{
    cin>>n;
    cin>>k;
}

void output()
{
    i=1;
    j=0;
    while(k>n)
    {
        k=k-n;

    }
    if((k==n)||(n-k==1))
    {
        if(k==n)
        cout<<k;
        else cout<<n-k;
    }else {
    m=k+1;

    while(m>n)
        {
            m=m-n;

        }
        if(m<=n)
        {
            cout<<n-m;
        }else {
        l=k+1;

        while(l>n)
            {
                l=l-n;

            }
            if(l<=n)
            {
                cout<<l;
            }else{cout<<0;}
        }

    }
}
int main()

{

    input();
    output();
    return 0;
}
