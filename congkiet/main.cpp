#include <iostream>
long a,b;
using namespace std;
int summ(long a, long b)
{
    long sum=0;
    sum=a+b;
    return sum;
}
int main()
{
    long sum=0;
    cin>>a>>b;
    sum=summ(a,b);
    cout << sum << endl;
    return 0;
}
