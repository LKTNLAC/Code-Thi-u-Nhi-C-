#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("brackets.inp");
ofstream cout("brackets.out");
long n,t,i;
char s[2001], stacks[1001],z(100001);
void input()
{
    char c;
    n=0;
    while (cin>>z)
    {
        n=n+1;
        cin>>c;
        s[n]=c;
    }
    for(i=n+1;i<=2*n;i++)
        s[i]=s[i-n];
}
void push(char v)
{
    t=t+1;
    stacks[t]=v;
}
char pop()
{
    char x=stacks[t];
    t=t-1;
    return x;
}/*
char top()
{
    char x=stacks[t];
    return x;
}*/
bool emty()
{
    if (t=0) return true;
    else return false;
}
bool kiemtra(long k)
{
    long i;
    if (n%2!=0)
        return false;
    t=0;
    for (i=k;i<=k+n-1;i++)
    {
        if((s[i]=='(')||(s[i]=='[')||(s[i]=='{'))
            push(s[i]);
           else if ((s[i]==')')||(s[i]==']')||(s[i]=='}'))
           if(emty) return false;
           else
           {
               if((s[i]==')')&&(stacks[t]=='('))
                    pop();
                else if ((s[i]==']')&&(stacks[t]=='['))
                    pop();
               else if ((s[i]=='}')&&(stacks[t]=='{'))
                    pop();
               else return false;
           }
    }
    return true;
}

void output()
{
    bool kt=false;
    long k;
    for(k=1;k<=n;k++)
    {
        if(kiemtra(k)==true)
        {
            cout<<"yes";
            return;
        }
    }
    if(n==0)
        cout<<"yes";
    else cout<<"no";
}
int main()

{
    input();
    output();
    return 0;
}
