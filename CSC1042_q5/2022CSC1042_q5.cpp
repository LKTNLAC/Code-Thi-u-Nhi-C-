#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

string s;
long i,dem=0;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("q5.inp","r",stdin);
    freopen("q5.out","w",stdout);

    getline(cin,s);


    for(i=0;i<s.length();i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            dem++;

    }
    cout<<dem;

    return 0;
}

