#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long n,maxx,i;
int main()
{
    cin>>n;
    vector <int>a;
    for(i=1;i<=n;i++)
    {
        int so;
        cin >> so;
        a.push_back(so);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>maxx)
            maxx=a[i];

    }
    cout<<maxx;
    return 0;
}
