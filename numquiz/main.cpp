#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("numquiz.INP");
ofstream cout("numquiz.OUT");
long n,i,x,u,sum;


long lcd(long a,long b)
{
    long temp;
    temp=b%a;
    while(temp!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
}
void input()
{
    cin>>n;
    cin>>u;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        u=lcd(u,x);
    }
}


int output ()
{

    sum=u*n;
    cout<<sum;
}


int main()
{
    input();
    output();
    return 0;
}
