#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> a,b  ;
    vector<int>result;

    cout<<"Enter list a"<<endl;
    long s,t;
    while(s!=-1)
    {
        cin>>s;
        a.push_back(s);
    }
    cout<<"Enter list b"<<endl;
    while(t!=-1)
    {
        cin>>t;
        b.push_back(t);
    }


    //set_union(begin(a),end(a),begin(b),end(b),inserter(result,end(result)));
    //set_intersection(begin(a),end(a),begin(b),end(b),inserter(result,end(result)));
    //set_difference(begin(a),end(a),begin(b),end(b),inserter(result,end(result)));
    set_symmetric_difference(begin(a),end(a),begin(b),end(b),inserter(result,end(result)));

    for_each(begin(result),end(result),[](int x){
        if(x!=-1)
            cout<<x<<endl;
    });
    return 0;
}
