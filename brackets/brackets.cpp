#include <cstdio>
#include <stack>
#include <cstring>
bool isclose[128];
char open[128];
char str[1024];
char temp[1024];
bool valid()
{
    std::stack<char> s;
    char c;
    for (char *ptr = str;(c = *ptr) ; ++ptr)
    {
        if (isclose[c])
        {
            if(!s.empty()&&open[c] == s.top()) s.pop();
            else{
                s.push(c);
                break;
            }
        }
        else{
            s.push(c);
        }
    }
    return s.empty();
}
int n;
void wrap()
{
    char c =str[n-1];
    str[n] =0;
    for (int i=n-1;i>0;--i)
        str[i] = str[i-1];
    str[0]=c;
}
int main()
{
    {
        FILE *f = fopen("brackets.inp","r");
        fscanf(f,"%s",str);
        n = strlen(str);
        fclose(f);
    }
    isclose[')']=true;
    open[')']='(';
    isclose['}']=true;
    open['}']='{';
    isclose[']']=true;
    open[']']='[';
    bool exist =false;
    for (int i=2048;i>0;--i)
    {
        exist=exist || valid();
        wrap();
    }
    {
        FILE *f = fopen("brackets.out","w");
        if (exist) fprintf(f,"yes");
        else fprintf(f,"no");
        fclose(f);
    }
    return 0;
}
