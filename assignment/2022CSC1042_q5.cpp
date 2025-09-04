#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;


int main() {
    long n,i,j,a[5][5],b[17],countt=1;
    //Input
    cout<<"Please enter lines!"<<endl;
    cin>>n;
    //Output
    cout<<"Answer is"<<endl;
    for(i = 1; i <= n; i++)
    {
        for(j = n-i; j>=1;j--)
        {
            cout<<"*";

        }
        for(j=1; j<=i; j++)
        {
            cout<<"@";
        }
        cout<<endl;
    }


    return 0;
}
