#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long long e,b,c;
void input()
{
	//long i,s=0,l=0;
	cin>>e>>b>>c;
}
int64_t m_quick_pow(long long a, long long n) {
	int64_t result = 1;
	while (n > 0) {
		if (n % 2 == 1)
			result *= a;
		a *= a;
		n /= 2;
	}
	return result;
}
void output()
{
    long long d;
    d=m_quick_pow(e,b);
    cout<<d%c;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("nosimple.inp","r",stdin);
    freopen("nosimple.out","w",stdout);
    input();
    output();
    return 0;
}
