
#include <iomanip>


#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("friend.INP");
ofstream cout("friend.OUT");
long long n,m;
void input()
{
    cin>>m>>n;
}
long long tonguoc(long long n)
{
    long long s,i;
    s=0;
    i=1;
    while(i<=n/2)
    {
        if (n%i==0) s=s+i;
        i=i+1;
    }
    return s;
}
long long sbb(long long m, long long n)
{
   if((tonguoc(m)==n)&&(tonguoc(n)==m)) return true;
   else return false;
}
void output()
{
    if (sbb(m,n)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}
int main()
{
    input();
    output();
    return 0;
}
