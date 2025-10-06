#include <bits/stdc++.h>

using namespace std;
long long x1,y1,x2,y2,kq,v1,v2;
int main()
{
    cout << "Nhap vao x1 = "<<endl;
    cin>>x1;
    cout << "Nhap vao y1 = "<<endl;
    cin>>y1;
    cout << "Nhap vao x2 = "<<endl;
    cin>>x2;
    cout << "Nhap vao y2 = "<<endl;
    cin>>y2;
    v1 = abs(x1-x2);
    v2 = abs(y1-y2);
    kq = sqrt(v1*v1+v2*v2);
    cout << " dien tich la = " << kq   << endl;
    return 0;
}
