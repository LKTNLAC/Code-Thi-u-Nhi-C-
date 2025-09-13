#include <bits/stdc++.h>

using namespace std;

string s;
long i;

int main()
{
    cout<<"Enter the string"<<endl;
    getline(cin,s);


    for(i=0;i<s.length();i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            s[i] = 'X';

    }
    cout<<s;
    return 0;
}
