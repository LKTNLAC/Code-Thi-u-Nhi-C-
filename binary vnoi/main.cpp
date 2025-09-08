#include <bits/stdc++.h>
using namespace std;

long long N,m,c,b,i,q;
string a[10000001];
void input()
{
	cin>>N;
	long long n = 2;
    a[0] = "0";
    a[1] = "1";
    long long k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        k++;
    }
    for (long long i = k; i < n; i++)
        cout << a[i] << endl;
}


int main()
{
    input();
    //output();
    return 0;
}
