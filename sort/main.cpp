#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("sort.INP");
ofstream cout("sort.OUT");
int i;
long long a,b,n;
long long A[1000];
void input()
{
    cin>>n;
    for (i=1;i<=n;i++);
        cin>>A[i];
    cin>>b;
}
void sort(long long l, long long r)
{
    long long i,j,x,tam;
    i=l;
    j=r;
    x=A[(i+j)/2];
    while (i<j)
    {
        while (A[i]<x)
            i=i+1;
        while (A[j]>x)
            j=j-1;
        if (i<=j)
        {
            tam=A[i];
            A[i]=A[j];
            A[j]=tam;
            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sort (i,r);
    if (l<j)
        sort (l,j);
}
int output ()
{
    long long i;
    sort(1,n);
    for (i=n;i>=1;i--)
    {
        cout<<A[i]<<" ";
    }
}


int main()
{
    input();
    output();
    return 0;
}
