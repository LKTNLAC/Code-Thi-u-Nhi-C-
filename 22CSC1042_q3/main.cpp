#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long long i, n, a[1000001], x, mid;


int binarysearch(long long l, long long r)
{
    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid] == x)
            return mid;
        else if (a[mid] < x)
            l = mid + 1;
        else r = mid - 1;

    }
}

int main()
{
    //Input
    long long temp = -999999999, boolean = 0;
    cout<<"Enter the length of array "<<endl;
    cin>>n;
    cout<<"Enter the target "<<endl;
    cin>>x;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
        cout<<endl;

        if(temp>a[i])
        {

            boolean = 1;
            break;
        }
        temp = a[i];
    }

    unsigned long long result = binarysearch(1, n);
    //Output
    if (boolean == 0)
        cout<<"Index of "<<x<<" is: "<<result<<endl;
    else cout<<"Wrong number!"<<endl;

    return 0;
}
