#include <bits/stdc++.h>
#include <string.h>

using namespace std;

string s;
long vowel = 0, consonant = 0, digit = 0, special = 0, i;

int main()
{
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    //s = "bui123@@";


    for(i=0;i<s.length();i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vowel++;
        else if (s[i] == '0' ||s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            digit++;
        else if (s[i] == '/' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}' || s[i] == '<' || s[i] == '>' || s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == ':' || s[i] == ';' || s[i] == '"' || s[i] == '|' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' || s[i] == '(' || s[i] == ')')
            special++;
        else
            consonant++;

    }
    cout<<"There are "<<vowel<<" vowels"<<endl;
    cout<<"There are "<<digit<<" digit"<<endl;
    cout<<"There are "<<special<<" special"<<endl;
    cout<<"There are "<<consonant<<" consonant"<<endl;
    return 0;
}
