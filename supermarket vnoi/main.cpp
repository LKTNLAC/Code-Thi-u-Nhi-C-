#include <iostream>

using namespace std;
long long soluong;
long long cost[21];
long long luugiatri=0;
long long sotien;
long long solan=0;

void dequy (string s){
    if(x.size()==soluong){
        for(long long y=0;y<soluong;y++){
            if (s[y]=='1'){
                luugiatri=luugiatri+cost[y];
            }
        }
        if(luugiatri==sotien){
            solan++;
        }
        luugiatri=0;
        return;
    }
    dequy(s+'0');
    dequy(s+'1');
}
int main()
{
    freopen("supermarket.inp","r",stdin)
    freopen("supermarket.out","w",stdout)
    cin>>soluong;
    cin>>sotien;

    for(long long x=0;x<soluong;x++){
        cin>>cost[x];
    }
    dequy("");
    cout<<solan;
    return 0;
}
