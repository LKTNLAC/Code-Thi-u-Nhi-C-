#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;

int main()
{
    long long n,sum = 0;
    while (true)
    {
        //Input
        cout << "Please enter number! " << endl;
        cin>>n;
        sum = sum + n;

        //Output
        if (n == 0){
            cout<<"The sum is: "<<sum;
            break;

        }
    }
    return 0;
}
