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
char s[102];
char r[102];
int len;

void getnum(const int i, const int p)
{
    if(i>=len)
    {
        for(int i=0;i<p;++i)
        {
            printf("%c",r[i]);
        }
        exit(0);
    }
    switch (s[i])
    {
        case 'a':
        {
            r[p] = '1';
            getnum(i+1,p+1);
            switch(s[i+1]){
            case 'a':
                {
                    if(s[i+2]=='c')
                        {
                            r[p]='8';
                            getnum(i+3,p+1);
                        }
                }
            break;
            case 'b':
            {
                if(s[i+2]=='c')
                {
                    r[p]='6';
                    getnum(i+3,p+1);
                }
            }
            break;
        }
    }
    break;
    case 'b':
    {
        r[p]='2';
        getnum(i+1,p+1);
        switch(s[i+1])
        {
            case 'a':
            {
                if(s[i+2]=='c')
                {
                    r[p]='7';
                    getnum(i+3,p+1);
                }
            }
            break;
            case 'b':
            {
                if (s[i+2]=='c')
                {
                    r[p]='4';
                    getnum(i+3,p+1);
                }
            }
            break;
        }
    }
    break;
    case 'c':
    {
        switch (s[i+1])
        {
        case'a':
        {
            if(s[i+2]=='c')
                {
                    r[p]='9';
                    getnum(i+3,p+1);
                }
        }
        break;
        case 'b':
        {
            if(s[i+2]=='c')
            {
                r[p]='5';
                getnum(i+3,p+1);
            }
        }
        break;
        case 'c':
        {
            r[p]='3';
            getnum(i+2,p+1);
        }
        break;
        }
    }
    }
}
int main()

{
    freopen("decode.inp","r",stdin);
    freopen("decode.out","w",stdout);
    scanf("%s",s);
    len = strlen(s);
    getnum(0,0);
    printf("-1");
    return 0;
}
