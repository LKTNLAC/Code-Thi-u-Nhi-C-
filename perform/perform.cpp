#include <bits/stdc++.h>
using namespace std;

long a[200000],pos[200000],k,x,y,i,n,m,j;
void swapa(int x, int y)
{
    long tmp=a[x];
    a[x]=a[y];
    a[y]=tmp;
    pos[a[x]]=x;
    pos[a[y]]=y;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("perform.inp","r",stdin);
    freopen("perform.out","w",stdout);
    cin>>n>>k;
    long i,j;
    for(i=1;i<=n;i++)
    {
        a[i]=i;
        pos[i]=i;
    }
    for(i=0;i<k;i++)
    {
        cin>>x>>y;
        int l=min(pos[x],pos[y]), r=max(pos[x],pos[y]);
        for(j=0;j<=(l+r)/2-l;j++)
            swapa(l+j,r-j);
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}

