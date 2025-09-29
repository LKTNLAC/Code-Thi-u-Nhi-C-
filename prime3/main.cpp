
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("prime3.INP");
ofstream cout("prime3.OUT");
long long n;
bool A[10000001];
long long p[10000001],r[10000001];
void input()
{
    cin>>n;
}
void taosangnt()
{
    int i,j;
    for (i=1;i<=10000000;i++)
        A[i]=true;
    A[1]=false;
    for (i=2;i<=10000000;i++)
        if (A[i]==true)
        {
            for (j=i;j<=10000000/i;j++)
                A[i*j]=false;
        }

}

void output()
{
    long long dem,dem1;
    int i;
    dem=0;
    for (i=2;i<=10000000;i++)
        if (A[i]==true)
        {dem=dem+1;
        p[dem]=i;
    }
    dem1=0;
    for (i=2;i<dem;i++)
        if (p[i]==(p[i-1]+p[i+1])/2)
    {
        dem1=dem1+1;
        r[dem1]=p[i];
    }
    cout<<r[n]<<endl;
}
int main()
{
    input();
    taosangnt();
    output();
    return 0;
}
