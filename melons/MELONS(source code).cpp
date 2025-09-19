#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

struct dua{
    int w0,s,fd,stt;
}a[100005],st[100005];

int nst,n;

bool cmp(dua a,dua b){
    return a.s<b.s ||  a.s==b.s&&a.w0>b.w0 || a.s==b.s&&a.w0==b.w0&&a.stt<b.stt;
}

void input(){
    freopen("Melons.inp", "r", stdin);
    freopen("Melons.out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].w0>>a[i].s;
        a[i].stt=i;
    }
    sort(a+1,a+n+1,cmp);
}

int fsd(dua a, dua b){
    if ((a.w0-b.w0)%(b.s-a.s)==0 && a.stt>b.stt){
        return (a.w0-b.w0)/(b.s-a.s);
    }else{
        return (a.w0-b.w0)/(b.s-a.s)+1;
    }
}

void preprocess(){
    for(int i=1;i<=n;i++){
        if(nst==0){
            st[nst]=a[i];
            nst++;
        }else{
            if(a[i].s==st[nst-1].s){
                continue;
            }else{
                while(fsd(st[nst-1],a[i])<=st[nst-1].fd){
                    nst--;
                    if(nst==0)break;
                }
                if(nst==0){
                    st[nst]=a[i];
                    st[nst].fd=0;
                    nst++;
                    continue;
                }
                st[nst]=a[i];
                st[nst].fd=fsd(st[nst-1],a[i]);
                nst++;
            }
        }
    }
}

void ask(int x){
    int l=0,r=nst-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(mid==nst-1){
            if(st[mid].fd<=x){
                cout<<st[mid].stt<<"\n";
                return;
            }
        }
        if(st[mid].fd<=x&&x<st[mid+1].fd){
            cout<<st[mid].stt<<"\n";
            return;
        }
        if(st[mid].fd>x){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
}

void solve(){
    int m,x[100005];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x[i];
    }
    for(int i=0;i<m;i++){
        ask(x[i]);
    }
}

int main(){
    input();
    preprocess();
    solve();
}
