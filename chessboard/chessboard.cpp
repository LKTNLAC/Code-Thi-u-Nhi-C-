#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("chessboard.INP");
ofstream cout("chessboard.OUT");
long long n,m;

void input()
{
    cin>>n>>m;
}
void output()
{
    long kq=m*n/2;
    if(m*n%2!=0)
        kq=kq+1;
    cout<<kq;

}
int main()
{
    input();
    output();
    return 0;
}
