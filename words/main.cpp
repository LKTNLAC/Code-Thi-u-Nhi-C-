#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;
//ifstream cin("words.inp");
//ofstream cout("words.out");
long n,t,i;
string s;
void input()
{
    getline(cin,s);
}

void output()
{
    long dem=0;
    long tu=1;
    long maxx=0;
    for(i=0;i<=s.length();i++)
    {
        if((s[i]==' ')&&(s[i+1]!=' ')||(i==s.length()))
           {
               tu=tu+1;
               if (maxx<dem)
               maxx=dem;
               dem=0;
           }else
           {
               dem=dem+1;
           }
    }
    cout<<tu<<' '<<maxx;
}
int main()

{
    input();
    output();
    return 0;
}
