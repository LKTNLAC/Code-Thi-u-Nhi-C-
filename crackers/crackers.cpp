#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a[15][100005],a1[15][100005],n,m,pow2[11]={1,2,4,8,16,32,63,128,256,512,1024};
void input()
{
    freopen("crackers.inp","r",stdin);
    freopen("crackers.out","w",stdout);
    cin>>n>>m;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
int solve(int x)
{
    int tmp=x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a1[i][j]=a[i][j];
        }
    }
    while(tmp>0){
        int i=0;
        while(pow2[i+1]<=tmp){
                i++;
        }
        for(int j=0;j<m;j++){
            a1[i][j]=abs(a1[i][j]-1);
        }
        tmp=tmp-pow2[i];
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a1[j][i]==0)cnt++;
        }
        sum+=max(cnt,n-cnt);
    }
    return sum;
}
int main()
{
    input();
    int maxx=0,tmp=1;
    for(int i=1;i<n;i++){
        tmp=2*tmp;
    }
    for(int i=0;i<=tmp;i++){
                maxx=max(maxx,solve(i));
    }
    cout<<maxx;
}
