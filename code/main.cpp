#include <stdlib.h>
#include <iomanip>
#include <math.h>
//#include <bits/stdc++.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("code.INP");
ofstream cout("code.OUT");
long long n,a[10001],j,b[10001][10001],so,lan;
char s[10001],c,kq;
long i;
void input()
{
    cin>>s;
}
long nhiphan(char c)
{
    long x;
    if (c=='A')
        x=1;
    if (c=='B')
        x=10;
    if (c=='C')
        x=11;
    if (c=='D')
        x=100;
    if (c=='E')
        x=101;
    if (c=='F')
        x=110;
    if (c=='G')
        x=111;
    if (c=='H')
        x=1000;
    if (c=='I')
        x=1001;
    if (c=='J')
        x=1010;
    if (c=='K')
        x=1011;
    if (c=='L')
        x=1100;
    if (c=='M')
        x=1101;
    if (c=='N')
        x=1110;
    if (c=='O')
        x=1111;
    if (c=='P')
        x=10000;
    if (c=='Q')
        x=10001;
    if (c=='R')
        x=10010;
    if (c=='S')
        x=10011;
    if (c=='T')
        x=10100;
    if (c=='U')
        x=10101;
    if (c=='V')
        x=10110;
    if (c=='W')
        x=10111;
    if (c=='X')
        x=11000;
    if (c=='Y')
        x=11001;
    if (c=='Z')
        x=11010;
    return x;
}
char doiso (long x)
{
    if (x==00001)
        c='A';
    if (x==00010)
        c='B';
    if (x==00011)
        c='C';
    if (x==00100)
        c='D';
    if (x==00101)
        c='E';
    if (x==00110)
        c='F';
    if (x==00111)
        c='G';
    if (x==01000)
        c='H';
    if (x==01001)
        c='I';
    if (x==01010)
        c='J';
    if (x==01011)
        c='K';
    if (x==01100)
        c='L';
    if (x==01101)
        c='M';
    if (x==01110)
        c='N';
    if (x==01111)
        c='O';
    if (x==10000)
        c='P';
    if (x==10001)
        c='Q';
    if (x==10010)
        c='R';
    if (x==10011)
        c='S';
    if (x==10100)
        c='T';
    if (x==10101)
        c='U';
    if (x==10110)
        c='V';
    if (x==10111)
        c='W';
    if (x==11000)
        c='X';
    if (x==11001)
        c='Y';
    if (x==11010)
        c='Z';
    return c;
}
void output()
{
    n=strlen(s);
    j=1;
    for(i=1;i<=n;i++)
    {
        a[i]=nhiphan(s[i]);
        while(a[i]!=0)
        {
            e[j]=a[i]%10;
            a[i]=a[i]/10;
            j=j+3;
        }
        j=j-n*4+1;

    }
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            b[i][j]=a[i+n];
        }
    }*/
    so=0;
    lan=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                if(lan!=5)
            {
                so=b[i][j]+so*10;
                lan=lan+1;
            }
            else
            {
                kq=doiso(so);
                lan=0;
                so=0;
            }
        }
    }
    cout<<kq<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
