#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("avgseq.INP");
ofstream cout("avgseq.OUT");
long n,sum,maxx,i,j;
long a[101],b[101];



void solve()
{
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    a[1]=b[1];
    sum=b[1];
    cout<<sum<<" ";
    for(i=2;i<=n;i++)
        {
            a[i]=b[i]*i-sum;
            sum=sum+a[i];
            cout<<a[i]<<" ";
        }




}



int main()
{
    solve();
    return 0;
}
