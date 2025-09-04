#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int inf = INT_MAX;

int m, n, resi, resj;
long long a[maxn], id[maxn], diffmin;

void entera() {
	cin >> m >> n;
	for (int i = 1; i <= m; ++i) cin >> a[i];
}

void init() {
	for (int i = 1; i <= m; ++i) id[i] = i;
	diffmin = inf + inf + 1;
}

void update(long long asum, int i, int j) {
	if (diffmin > asum) {
		diffmin = asum;
		resi = id[i];
		resj = j;
	}
}

void find(int j, int b) {
	int low = 1, high = m, middle;
	while (low <= high) {
		middle = (low + high) / 2;
		if (a[middle] < b) low = middle + 1;
		else high = middle - 1;
	}
	if (low > 1) update(b - a[low - 1], low - 1, j);
	if (low <= m) update(a[low] - b, low, j);
}

void enterb() {
	int b;
	for (int j = 1; j <= n; ++j) {
		cin >> b;
		find(j, -b);
	}
}

int main() {
	freopen("asummin.inp", "r", stdin);
	freopen("asummin.out", "w", stdout);
	entera();
	init();
	sort(a + 1, a + m + 1);
	enterb();
	cout << resi << ' ' << resj;
}