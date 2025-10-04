#include <bits/stdc++.h>
using namespace std;
bool A[100000];
long long b[10000],c[10000],k,x,y,i,n,m,j;
void input()
{
    cin>>n;
}
void taosangnt()
{
    long i,j;
    for (i=1;i<=100000;i++)
        A[i]=true;
    A[1]=false;
    for (i=2;i<=100000;i++)
        if (A[i]==true)
        {
            for (j=i;j<=100000/i;j++)
                A[i*j]=false;
        }

}
void output()
{
    long j=1,k=1;
    for(i=2;i<=100000;i++)
    {
        if(A[i]==true){
            b[j]=i;
            if(A[j]==true){
                c[k]=b[j];
                k++;
            }
            j++;
        }
    }
    cout<<c[n];
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("supprime.inp","r",stdin);
    freopen("supprime.out","w",stdout);
    input();
    taosangnt();
    output();
    return 0;
}

