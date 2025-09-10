/*#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long m,n,k,luuk;


void input()
{
    long i;
    cin>>k;
    luuk=k;
}
void solve()
{
    long i,dem=0,dientich=1;
    while(dientich<=k)
    {
        dientich=dientich*2;
        dem=dem+1;
    }
    cout<<dientich<<" "<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("choco.inp","r",stdin);
    freopen("choco.out","w",stdout);
    input();
    solve();
    return 0;
}*/

#define ull unsigned long long

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("choco.inp","r",stdin);
    freopen("choco.out","w",stdout);
    ull k;
    cin >> k;

    // k <= 10^6, loop tới 20 là đủ :v
    ull z = 1;
    ull i;
    for (i = 0; i < 20; i++) {
        if (z >= k) {
            break;
        }
        z = z * 2;
    }

    cout << z << " ";
    for (ull q = 0; q < 20; q++) {
        ull mask = 1 << q;
        if ((k & mask) != 0) {
            cout << i - q << endl;
            break;
        }
    }

    return 0;
}
