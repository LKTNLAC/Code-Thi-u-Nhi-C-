#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;


int main() {
    long n,i,j,a[5][5],b[17],countt=1;
    //Input
    cout<<"Please enter input!"<<endl;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
            //Convert to B
            b[countt]=a[i][j];
            countt++;
        }
    }
    //Output
    cout<<"Array B is [";
    for(i = 1; i <= 16; i++)
    {
        cout<<b[i];
        if(i == 16)
            cout<<"]";
        else cout<<", ";
    }


    return 0;
}
