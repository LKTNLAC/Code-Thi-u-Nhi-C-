#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;


int main() {
    long n,cost,sell;
    //Input
    cout<<"Please enter cost price: "<<endl;
    cin>>cost;
    cout<<"Please enter selling price: "<<endl;
    cin>>sell;

    long amount = cost - sell;

    switch (amount > 0)
    case true:
    {
    {
        cout<<"It is LOSS!"<<endl;
        cout<<"Loss around "<<amount<< " VND";
        break;
    }
    case false:
    {
        cout<<"It is PROFIT!"<<endl;
        cout<<"Profit around "<<-amount<< " VND";
        break;
    }
    }
    return 0;
}
