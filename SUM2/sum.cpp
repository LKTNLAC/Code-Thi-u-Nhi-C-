#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1504;
int dp[maxn][5][maxn];

void init(){
	for(int i = 0; i < maxn; ++i)
        for(int j = 0; j < 5; ++j)
            for(int k = 0; k < maxn; ++k)
                dp[i][j][k] = -1;
}

int DP(int i, int j, int k){
	if(dp[i][j][k] != -1) return dp[i][j][k];
	int &res = dp[i][j][k];

	if(j * k > i) return res = 0;
	if(j == 1) return res = 1;

	res = DP(i - k, j - 1, k) + DP(i, j, k + 1);
	return res;
}

int input(){
	init();
	int n;
	while (cin>>n){
        if(n<4)
            cout<<0<<endl;
        else cout << DP(n, 4, 1) << endl;
	}
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    input();
    //output();
    return 0;
}
