#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int n,k;
struct star{
    int x,y;
}sky[1005],smap[1000];

bool cmp(star a,star b){
    return a.x<b.x||(a.x==b.x && a.y<b.y);
}
void input()
{
    freopen("stars.inp","r", stdin);
    freopen("stars.out","w", stdout);
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>smap[i].x>>smap[i].y;
    }
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>sky[i].x>>sky[i].y;
    }
    sort(sky+1,sky+n+1,cmp);
}
bool binsearch(star a){
    int l=1,r=n;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(cmp(a,sky[mid])) {r=mid-1;continue;}
        if(cmp(sky[mid],a)) {l=mid+1;continue;}
        return true;
    }
    return false;
}
void solve()
{
    for(int i=1;i<=n;i++){
        int vx=smap[1].x-sky[i].x,vy=smap[1].y-sky[i].y;
        star tmp;
        tmp.x=smap[1].x-vx;
        tmp.y=smap[1].y-vy;
        int j=1;
        while (binsearch(tmp))
        {
            if(j>k)break;
            j++;
            tmp.x=smap[j].x-vx;
            tmp.y=smap[j].y-vy;
        }
        if(j>k){
            cout<<-vx<<" "<<-vy;
            return;
        }
    }
}
int main()
{
    input();
    solve();
}
