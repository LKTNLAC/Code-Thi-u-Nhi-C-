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
        k=k-i*n;
        j=j+i*n;
        i=i+1;

    }
    if(k==n)
    {
        cout<<j;
    }else {
    m=k+1;
    k=0;
    i=1;
    j=j+1;
    while(m>n)
        {
            m=m-i*n;
            j=j+i*n;
            i=i+1;
        }
        if(k==m)
        {
            cout<<j;
        }else {
        l=k+1;
        k=k+1;
        i=1;
        j=j+1;
        while(l>n)
            {
                l=l-i*n;
                j=j+i*n;
                i=i+1;
            }
            if(k==m)
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
