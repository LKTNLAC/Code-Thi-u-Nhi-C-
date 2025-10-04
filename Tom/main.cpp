#include <iostream>

using namespace std;

int n,m,i,a,b,tong;
int main()
{

    for(i=1;i<=36;i++)
    {
        tong=4*i + 2*(36-i);
        if(tong == 100)
        {
            cout<<"Chó có "<<i<<" con";
            cout<<"Gà có "<<36-i<<" con";
        }
    }

    return 0;
}
