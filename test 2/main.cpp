#include <bits/stdc++.h>
using namespace std;
long a[1000001];
long i,n,m,j;
void input()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void output()
{
    long long dem,i,maxx=0;
    dem=0;
    for (i=2;i<=n;i++)
    {
        if (a[i-1]<a[i])
            {
                dem++;
            }
            else
            {
                if(dem>maxx)
                    maxx=dem;
                dem=0;
            }
    }
    cout<<maxx;
}

int main() {

    input();
    output();
    return 0;
}

