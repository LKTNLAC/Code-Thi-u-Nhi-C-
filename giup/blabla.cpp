#include <iostream>

using namespace std;

int main()
{
    char z="y";
    while(z=="y"){
    cout<<"Chon muc thuc hien: "<<endl;
    cout<<"1 Nhap vao 1 so nguyen duong k va tinh s = 2 x 5 x 8 x ... x (3k+2)"<<endl;
    cout<<"2 Tinh tong cac so nguyen duong k nhap vao tu ban phim cho den khi tong > hơn 30"<<endl;
    cin>>chucnang;
    if(nhap==1)
    {
        cout<<"Nhap vao so nguyen duong k= "<<endl;
        cin>>k>>endl;
        if((k>26)&&(k<0)){
            cout<<"Nhap lai 1 so = "<<endl;
            cin>>k>>endl;}
        int i=2;
        int s=1;
        while(3*k+2>=i)
        {
            s=s*i;
            i=i+3;
        }
    }
    }
    return 0;
}
