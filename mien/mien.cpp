#include <bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
long a[1001][1001],mang[1000],dem=0;
long long b[10000],c[10000],k,x,y,i,n,m,j,s=0;
void input()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
}
void loang(int x, int y, int prev)
{
    if((x<1)||(x>n))
        return;
    if((y>m)||(y<1))
        return;
    if(a[x][y]!=prev)
        return;
    if(vis[x][y])
        return;
    s++; vis[x][y]=1;
    loang(x+1,y,a[x][y]);
    loang(x,y+1,a[x][y]);
    loang(x-1,y,a[x][y]);
    loang(x,y-1,a[x][y]);

}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("mien.inp","r",stdin);
    freopen("mien.out","w",stdout);
    input();
    int x,y,maxx=0,k=1,sx,sy;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            s=0;
            loang(i,j,a[i][j]);
            //cout<<s<<" ";
            if(s!=0)
                {
                    dem++;
                    mang[k]=s;
                    k++;
                }
            if(s>maxx)
            {
                maxx=s;
                sx=i;
                sy=j;
            }
        }
    }
    cout<<dem<<endl;
    cout<<maxx<<" "<<sx<<" "<<sy;
    return 0;
}

