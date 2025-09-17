#include <iostream>
using namespace std;

int main()
{
    int choose;
    char yesno='y';
    while (yesno='y') {
        label:
        cout<<"Chon muc thuc hien\n";
        cout<<"1. Nhap vao so nguyen duong K và tính S = 2 x 5 x 8 x ... x (3K+2)\n";
        cout<<"2. Tinh tong cac so nguyen duong K nhap vao tu ban phim cho den khi tong lon hon 30\n";
        cin >> choose;
        if (choose == 1){

            int x;
            int S = 1;
            //char yesno;
            cout<<"Nhap mot so nguyen duong = ";
            cin >> x;
                if (x<0 || x>20){
                    cout<<"Ban chi nhap 1 so tu 0 den 20. Nhap lai 1 so = ";
                    cin >> x;
                }
                if (x>=0 || x <=20) {
                    for (int j = 0; j <= x; j++ ){
                        S = S * (3*j + 2);
                    }
                    cout <<"Tong =" << S << "\n";
                    S = 1;
                }

                    cout << "Ban co muon tiep tuc khong: (y/n)";
                    cin >> yesno;
                    if (yesno == 'n'){
                        return 0;
                    } else if (yesno == 'y') {
                        goto label;
                    }

            cin >> choose;

        }
        if (choose == 2){
            int x2;
            int S2 = 0;
            char yesno2;
            cong:
            cout<<"Nhap mot so nguyen duong = ";
            sai:
            cin >> x2;
            for (int i = 0; i < 100; i++) {
                if (x2<0 || x2>20){
                    cout<<"Ban chi nhap 1 so tu 0 den 20. Nhap lai 1 so = ";
                    goto sai;
                }
                if (x2>=0 || x2 <=20) {
                    S2 = S2 + x2;
                }

                if (S2>20){
                    cout << "Tong = "<< S2 <<"\n";
                    S2 = 0;
                    cout << "Ban co muon tiep tuc khong: (y/n)";
                    cin >> yesno2;
                    if (yesno2 == 'n'){
                        return 0;
                    } else if (yesno2 == 'y') {
                        goto label;
                    }
                }
                goto cong;
            }
        }else cout<<"Ban chi duoc nhap 1 va 2"<<endl;
    }
}
