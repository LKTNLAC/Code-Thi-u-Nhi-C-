#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("author.inp");
ofstream cout("author.out");
string a,b;
long i;
void input()
{
    cin>>a;
}
void output()
{
    b=a[0];
    for(i=2;i<=a.length();i++)
    {
        if(a[i]=='-')
            b=b+a[i+1];
    }
    cout<<b;
}
int main()

{

    input();
    output();
    return 0;
}
