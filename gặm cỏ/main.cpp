#include <bits/stdc++.h>

using namespace std;
long a[1000][1000],dx[1000],dy[1000],bi,bj,ci,cj;
bool tham[1000][1000];

void bfs(int x, int y)
{
    queue<int> qx;
    queue<int> qy;
    qx.push(x);qy.push(y);
    //tham[dinhi][dinhj] = true;
    while(!qx.empty())
    {
        int xx = q.front(); qx.pop();
        int yy = q.front(); qy.pop();
        //tham[u]=true;
        for (int i = 0;i < 4;i++)
        {
            if((xx + dx[i] < 1)||(xx + dx[i] > r)) continue;
            if((xx + dy[i] < 1)||(xx + dy[i] > c)) continue;
            if(tham[xx + dx[i]][yy + dy[i]) continue;

            qx.push(xx + dx[i]);
            qy.push(yy + dy[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("bessie.inp","r",stdin);
    freopen("bessie.out","w",stdout);

    int r,c;
    cin>>r>>c;
    for(int i = 1;i <= r;i++)
        for(int j = 1;j <= c;j++)
        {
            char x;
            cin>>x;
            if(x=='.')
                a[i][j]=0;
            if(x=='*')
                a[i][j]=-1;
            if(x=='B')
            {
                bi=i;
                bj=j;
            }
            if(x=='C')
            {
                ci=i;
                cj=j;
            }
        }
    bfs(ci,cj);
    cout<<dodai[bi][bj];
    return 0;
}
