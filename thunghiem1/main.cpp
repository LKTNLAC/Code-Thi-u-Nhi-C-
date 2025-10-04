#include <bits/stdc++.h>
using namespace std;
int toNum(char c){
     if(c > 60 && c < 91) return int(c) - 64;
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

int main(){
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
