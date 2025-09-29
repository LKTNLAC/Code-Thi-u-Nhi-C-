
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("prime2.INP");
ofstream cout("prime2.OUT");
long long m,n;
bool A[10000001];
void input()
{
    cin>>m;
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
    long long dem,i;
    dem=0;
    for (i=m;i<=n;i++)
    {
        if (A[i]==true) dem=dem+1;
        i=i+1;
    }
    cout<<dem<<endl;
}
int main()
{
    input();
    taosangnt();
    output();
    return 0;
}
