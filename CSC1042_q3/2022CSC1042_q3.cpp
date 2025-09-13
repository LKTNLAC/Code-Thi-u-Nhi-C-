#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int sqr(int n) {
    if (n < 0) {
        cout<<"Input value cannot be negative.";
        return -1;
    }

    return n * n;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sqr(n);
    if (result != -1)
        cout << "Square of " << n << " is " << result << endl;

    return 0;
}
