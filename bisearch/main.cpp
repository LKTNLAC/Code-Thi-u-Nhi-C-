#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("bisearch.INP");
ofstream cout("bisearch.OUT");
long a[100001],i,n,x,s;



void input()
{
    cin>>n;
    cin>>x;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]==x)
        {
            s=i;
            return;
        }
    }
}


long output ()
{

    cout<<s;

}
int main()
{
    input();

    output();
    return 0;
}
