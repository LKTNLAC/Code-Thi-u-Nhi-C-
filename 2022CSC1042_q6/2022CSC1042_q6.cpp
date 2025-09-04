#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;


int main() {
    long n,i,j,a[5][5],b[17],countt=1;
    while (true)
    {
        cout<<"Please enter number! ";
        cin>>n;
        if(n>=0)
            cout<<"Square of number is: "<<n*n<<endl;
        else
        {
            cout<<"The number is negative!"<<endl;
            cout<<"EXIT";
            break;//exit
        }
    }
    return 0;
}
