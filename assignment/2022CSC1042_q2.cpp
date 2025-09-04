#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;

int main()
{
    long long x,y;

    //Input
    cout<<"Please enter x: ";
    cin>>x;
    cout<<"Please enter y: ";
    cin>>y;

    //Output
    if((x > 0) && (y > 0))
    {
        cout<<"The point is in I st quadrant! "<<endl;
    }
    if((x > 0) && (y < 0))
    {
        cout<<"The point is in II st quadrant! "<<endl;
    }
    if((x < 0) && (y < 0))
    {
        cout<<"The point is in III st quadrant! "<<endl;
    }
    if((x < 0) && (y > 0))
    {
        cout<<"The point is in IV st quadrant! "<<endl;
    }

    return 0;
}
