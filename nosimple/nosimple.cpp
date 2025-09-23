#include <bits/stdc++.h>
using namespace std;

long long modulo_multiplication(long long a, long long b, long long mod){
    long long res = 0;

    for(int i = 63; i > -1; --i){
        res += res;
        if(res >= mod) res -= mod;

        if((b >> i) & 1){
            res += a;
            if(res >= mod) res -= mod;
        }
    }

    return res;
}

long long modulo_exponentation(long long a, long long b, long long mod){
    long long res = 1;

    for(int i = 63; i > -1; --i){
        res = modulo_multiplication(res, res, mod);
        if((b >> i) & 1) res = modulo_multiplication(res, a, mod);
    }

    return res;
}

int main() {
    long long a, b, c;
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("nosimple.inp","r",stdin);
    freopen("nosimple.out","w",stdout);
    cin >> a >> b >> c;
    cout << modulo_exponentation(a, b, c);
}

