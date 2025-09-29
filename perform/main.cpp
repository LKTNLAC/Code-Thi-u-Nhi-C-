#include <bits/stdc++.h>
using namespace std;

long a[10001],b[10001],c[10001],i,n,m,j;
void input()
{
    long i;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        c[i]=i;
    for(i=1;i<=m;i++)
        cin>>a[i]>>b[i];
}

void output()
{
    long hieu,hi,ho;
    for(i=1;i<=m;i++)
    {
        hieu=(b[i]-a[i]+1)/2;
        hi=hieu+1;
        ho=a[i];
        for(j=1;j<=hieu;j++)
        {
            swap(c[ho],c[ho+hi]);
            hi=hi-2;
            ho++;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("perform.inp","r",stdin);
    freopen("perform.out","w",stdout);
    input();
    output();
    return 0;
}

