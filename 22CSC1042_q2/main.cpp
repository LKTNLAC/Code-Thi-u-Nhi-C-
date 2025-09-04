#include <bits/stdc++.h>
#include <string.h>

using namespace std;

string s;
long long vowel = 0, consonant = 0, digit = 0, special = 0, i, n;

unsigned long long factorial(long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


int main()
{
    //Input
    cout<<"Enter the number"<<endl;
    cin>>n;

    unsigned long long result = factorial(n);
    //Output
    cout<<"Factorial of "<<n<<" is: "<<result<<endl;

    return 0;
}
