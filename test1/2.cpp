#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
long n,i,j,flag=0,m,a[10001][10001],tong[100001];
int main()
{
    cin>>m>>n;
  	for(i=1;i<=m;i++)
      for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=m;i++)
            if(a[i][j]>=0)
            {
                flag=1;
                break;
            }
            if(flag==0)
                cout<<j-1<<" ";
            flag=0;

    }

    return 0;
}

