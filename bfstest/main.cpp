#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
//long n,s;
//char a[100005];
int tham[100001];
vector<int> kq;
vector<int> dsk[100000];
long long ans,cnt,dem=0,n,a,b,p,r;
void dfs(long dinh, long dodai)
{
    if(tham[dinh]!=-1) return;
    tham[dinh]=dodai;
    kq.push_back(dinh);
    for(int i=0;i<dsk[dinh].size();i++)
    {

        dfs(dsk[dinh][i],dodai+1);

    }
    /*
    du=(i+a)%p;
    du=(i+b)%p;
    du=(i+a+b)%p;
    */
}
void output()
{
    long n,m,i;
    cin>>n>>p>>a>>b>>r;
    for(i=0;i<=p-1;i++)
    {
        long u,v;
        dsk[i].push_back((i+a)%p);
        dsk[i].push_back((i+b)%p);
        dsk[i].push_back((i+a+b)%p);
        tham[i]=-1;
    }
    dfs((n+a)%p,1);
    dfs((n+b)%p,1);
    dfs((n+a+b)%p,1);

    /*
    for(i=1;i<=m;i++)
    {
        cout<<i<<": ";
        long j;
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
    //for(i=0;i<n;i++)
        cout<<tham[r]<<" ";

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("bfs.inp","r",stdin);
    freopen("bfs.out","w",stdout);
    //input();
    output();
    return 0;
}
