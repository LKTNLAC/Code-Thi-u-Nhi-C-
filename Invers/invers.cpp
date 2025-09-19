#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

const long long maxn = 1e6 + 6;
long long tree[maxn];

void inc(long long pos){
	while(pos < maxn){
		++tree[pos];
		pos += pos & -pos;
	}
}

long long sum(long long pos){
	long long res = 0;
	while(pos > 0){
		res += tree[pos];
		pos -= pos & -pos;
	}
	return res;
}
void solve()
{
    long long n;
    cin >> n;

	long long ans = 0;

	for(long long i = 0; i < n; ++i){
		long long val;
		cin >> val;

		ans += sum(maxn - 1) - sum(val);
		inc(val);
	}

	cout << ans;
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("invers.inp","r",stdin);
    freopen("invers.out","w",stdout);
    solve();
    return 0;

}
