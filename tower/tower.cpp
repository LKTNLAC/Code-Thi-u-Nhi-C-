#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

int n,A[5010],B[5010],C[5010],tich[5010],L[5010],T[5010];

int nhonhat(int x,int y, int z)
{
    int nn=x;
    if(y<nn) nn=y;
    if(z<nn) nn=z;
    return nn;
}

void phanchia(int x,int y, int z, int k)
{
    int nn=min(min(x,y),z);
    int ln=max(max(x,y),z);
    int tg = (x+y+z)-nn-ln;
    A[k]=ln;B[k]=tg;C[k]=nn;
    tich[k]=ln*tg;
    L[k]=nn;
}
void input()
{
    int d1,d2,d3;
    cin>>n;
    for (long i=1; i <=n ;i++)
    {
        cin>>d1>>d2>>d3;
        phanchia(d1,d2,d3,i);
    }
}
void Quicksort(int l, int r)
{
    int i,j,m,tg;
    i=l;
    j=r;
    m=tich[(l+r)/2];
    while(i<j)
    {
        while(tich[i]>m) i++;
        while(tich[j]<m) j--;
        if(i<=j)
        {
            swap(tich[i],tich[j]);
            swap(A[i],A[j]);
            swap(B[i],B[j]);
            swap(C[i],C[j]);
            swap(L[i],L[j]);
            i++;
            j--;
        }
    }
    if(i<r) Quicksort(i,r);
    if(l<j) Quicksort(l,j);

}
void solve()
{
    int max = 0,maxvt;
    Quicksort(1,n);
    for(long i=1;i<= n;i++)
    {
        for(long j = 1;j<=i-1;j++)
            if(A[j]>=A[i]&&B[j]>=B[i]&&L[j]+C[i]>L[i])
            {
                L[i]=L[j]+C[i];
            }
            if(L[i]>max)
            {
                max = L[i];
            }
    }
    cout << max <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("Tower.inp","r",stdin);
    freopen("Tower.out","w",stdout);
    input();
    solve();
    return 0;
}
