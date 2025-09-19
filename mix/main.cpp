
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("mix.INP");
ofstream cout("mix.OUT");
int n;
int X[3],Y[3],Z[3];
void input()
{
    int i,p,t1,t2,t3;
    i=0;
    for (i=0;i<=2;i++)
    {
            cin>>X[i]>>Y[i]>>Z[i];
            p=12/(X[i]+Y[i]+Z[i]);
            X[i]=p*X[i];
            Y[i]=p*Y[i];
            Z[i]=p*Z[i];
            t1=X[i]+t1;
            t2=Y[i]+t2;
            t3=Z[i]+t3;
    }
}
void output()
{
    long long t1,t2,t3;
    int i;

    cout<<t1<<" "<<t2<<" "<<t3<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
