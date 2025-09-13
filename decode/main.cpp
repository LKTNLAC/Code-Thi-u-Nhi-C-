#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
string s,res;
char c[2][3] = {{ '8', '7', '9' },{ '6', '4', '5' },};
int i;
bool stop;
void input()
{
    getline(cin,s);
}
void output()
{
    i=s.length();
    res="";
    stop=false;
   while ((i>=1) && (!stop))
   {
      switch (s[i])
      {
         case 1: res = "1" + res;
         case 2: res = "2" + res;
         case 3:
         {
            i=i-1;
            if (s[i]==3) res="3" + res;
            else if (i>1)
            {
               res= c[s[i], s[i-1]] + res;
               i=i-1;
            }
            else stop=true;
         }
         default :i=i;
      };


      i=i-1;
   }
   if (stop==true) cout<<"-1"<<endl;
   else cout<<res<<endl;

}
int main()

{
    input();
    output();
}
