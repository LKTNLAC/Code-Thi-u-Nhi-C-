#include <bits/stdc++.h>
using namespace std;
bool A[10000000];
long long b[10000],c[10000],k,x,y,i,n,m,j;
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
    long j=1,k=1;
    for(i=1;i<=1000000;i++)
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
    freopen("suprime.inp","r",stdin);
    freopen("suprime.out","w",stdout);
    input();
    taosangnt();
    output();
    return 0;
}

