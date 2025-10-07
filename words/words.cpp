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
long i;
string s;
void input()
{
    getline(cin,s);
}

void output()
{
    long dem=0;
    long tu=0;
    long maxx=0;
    long z=0;
    //if (s[0]==' ') tu=tu-1;
    for(i=0;i<s.length();i++)
    {
        if((s[i]!=' ')&&(s[i+1]==' ')||(i==s.length()-1))
           {
               tu=tu+1;
               dem=dem+1;
               if (maxx<dem){
               maxx=dem;
               /*if (z==0){
                z=1;
                maxx=maxx+1;
               }*/}
               dem=0;
           }
           else if (s[i]!=' ')
           {
               dem=dem+1;
           }
    }
    cout<<tu<<' '<<maxx;
}
int main()

{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("words.inp","r",stdin);
    freopen("words.out","w",stdout);
    input();
    output();
    return 0;
}
