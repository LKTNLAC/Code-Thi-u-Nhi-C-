//#include <stdlib.h>
//#include <iomanip>
//#include <math.h>
#include <bits/stdc++.h>
//#include <iostream>
//#include <string.h>
//#include <fstream>

using namespace std;
//ifstream cin("code.INP");
//ofstream cout("code.OUT");
//long long n,a[10001],j,b[10001][10001],so,lan,d[100001];
//char s[10001],c,kq;
//long i;
int toNum(char c){
     if(c > 64 && c < 91) return int(c) - 64;
     if(c == ' ') return 0;
     if(c == '.') return 27;
     if(c == ',') return 28;
     if(c == ':') return 29;
     if(c == ';') return 30;
     if(c == '"') return 31;
}

char toChar(int n){
     if(n > 0 && n < 27) return char(n + 64);
     if(n == 0) return ' ';
     if(n == 27) return '.';
     if(n == 28) return ',';
     if(n == 29) return ':';
     if(n == 30) return ';';
     if(n == 31) return '"';
}
void output()
{

     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);
     string s;
     getline(cin, s);
     vector<int> num;
     for(char c : s) num.push_back(toNum(c));

     bitset<5> val;
     int timer = 4;
     for(int bit = 4; bit >= 0; --bit){
          for(int i : num){
               val.set(timer--, (i >> bit) & 1);
               if(timer == -1) timer = 4, cout << toChar(val.to_ulong());
          }
     }
}
int main()
{
    freopen("code.inp","r",stdin);
    freopen("code.out","w",stdout);
    output();
    return 0;
}
