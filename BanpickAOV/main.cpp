#include <iostream>

using namespace std;

void Input()
{
    cout<<"CHOOSE YOUR LANE!"<<endl;
    cout<<"1. Top Lane"<<endl;
    cout<<"2. Jungle Lane"<<endl;
    cout<<"3 Mid Lane"<<endl;
    cout<<"4. AD Lane"<<endl;
    cout<<"5. SP Lane"<<endl;
    cout<<"Enter lane hero: ";
    cin>>lane;

}
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("aov.inp","r",stdin);
    //freopen("aov.out","w",stdout);
    cout << "Welcome to Ban Pick AOV!" << endl;
    cout << "Choose 1/Pick or 2/Counter! " <<endl;
    cin >> pc;
    Input();
    Output();
    return 0;
}
