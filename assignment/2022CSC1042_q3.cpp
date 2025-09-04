#include <iostream>
#include <bits/stdc++.h> //Special library

using namespace std;

int Search(long arr[], long length, long target) {
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            return i;  // Found the target at index i
        }
    }
    return -1;  // Target not found
}

int main() {
    const long SIZE = 10;
    long numbers[SIZE], index, i;

    // Input 10 integers
    cout<<"Enter 10 integers:\n";
    for (i = 0; i < SIZE; i++)
    {
        cin>>numbers[i];
    }

    // Input target
    int target;
    cout<<"Enter a number to search for: ";
    cin>>target;

    // Search in array
    index = Search(numbers, SIZE, target);

    //Output
    if (index != -1)
    {
        cout<<"The first occurrence of "<<target<<" is at index "<<index<<endl;
    } else
    {
        cout<<"The number "<<target<<" is not found in the array."<<endl;
    }

    return 0;
}
