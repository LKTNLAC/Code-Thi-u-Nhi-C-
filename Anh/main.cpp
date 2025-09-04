#include <bits/stdc++.h>

using namespace std;
long long i,n;
long long Tong_tich(long long n)
{
    long long sum = 0, tich = 1;
    for(i = 1;i <= n;i++)
    {
        tich = tich * i;
        sum = sum + tich;
    }
    return sum;
}
int Check_odd_even(long long n)
{
    if(n % 2 != 0)
        return 0;
    else return 1;
}

void Print_array(const double a[], long sizes)
{

    for (i = 0; i < sizes; i++)
    {
        cout<<a[i]<<" ";
    }
}
void Check_bai_2(const double a[], long sizes)
{
    double sum = 0, dem = 0;
    for (i = 0; i < sizes; i++)
    {
        if (a[i] > 0)
            sum = sum + a[i];
        if (a[i] < 0)
            dem++;
    }
    cout<<"Tong cac so duong = "<<sum<<endl;
    cout<<"So am trong mang = "<<dem<<endl;
}
void Check_bai2_cau3(const double a[], long sizes)
{
    double sum = 0, mean = 0, dem = 0;
    for(i=0; i < sizes; i++)
    {
        if(int(a[i]) % 2 == 0)
        {
            sum = sum + a[i];
            dem++;
        }
    }
    mean = sum/dem;
    cout<<"Trung binh cong phan tu chan trong mang = "<< mean << endl;
}

const int MAX_ROWS = 50;
const int MAX_COLS = 50;
/*
void Check_bai3_cau1(const double a[][], long row, long col)
{
    long i,j;
    for(i = 0; i < row; i++ )
    {
        for(j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}*/

void Bai4_cau1(const double sx[], const double sy[], long sizes)
{
    for(i = 0; i < sizes; i++)
    {
        cout<<"("<<sx[i]<<";"<<sy[i]<<")"<<endl;
    }
}

void Bai4_cau2(const double xx[], const double yy[], long sizes)
{
    double maxx = -10000, check, luux,luuy;
    for(i = 0; i < sizes; i++)
    {
        if( xx[i]*xx[i]+yy[i]*yy[i] > maxx*maxx)
        {
            luux = xx[i];
            luuy = yy[i];
            maxx = xx[i]*xx[i]+yy[i]*yy[i];
        }
    }
    cout<<"Toa do xa nhat la: ("<<luux<<";"<<luuy<<")"<<endl;
}

int main()
{
    cout << "==== BAI 1 ====" << endl;

    cout<<endl;
    cout << "Cau 1:"<<endl;
    cout << " S(10) = "<< Tong_tich(10)<<endl;
    cout << " S(15) = "<< Tong_tich(15)<<endl;
    cout << " S(500) = "<< Tong_tich(500)<<endl;

    cout<<endl;
    cout <<"Cau 2:"<<endl;
    cout << " S(81) = "<< Check_odd_even(81)<<endl;
    cout << " S(-90) = "<< Check_odd_even(-90)<<endl;
    cout << " S(100) = "<< Check_odd_even(100)<<endl;
    cout<<endl;
//______________________________________
    cout << "==== BAI 2 ====" << endl;
    cout<<endl;

    double arr[50] = {16.2, 99.4, -51.6, 98.5, -79.6, 68.3, -34.8, 91.6, -97.4, 40.8};

    cout<<"Cau 1:"<<endl;
    cout << "Mang 1 chieu in ra: "<< endl;
    Print_array(arr,10);
    cout<<endl;
    cout<<endl;

    cout<<"Cau 2:"<<endl;
    Check_bai_2(arr,10);
    cout<<endl;

    cout<<"Cau 3:"<<endl;
    Check_bai2_cau3(arr,10);
    cout<<endl;

//______________________________________
    cout << "==== BAI 3 ====" << endl;

    double ar2[50][50] = {10.0, 4.4, 8.9, 2.6, 6.3, 5.5, 5.8, 3.5, 1.5, 9.4, 1.4, 4.5, 7.3, 8.7, 7.4, 6.9, 3.4, 1.1, 9.8, 6.9, 5.0, 2.2, 5.3, 7.7, 1.9};

    cout<<"Cau 1:"<<endl;
    //Check_bai3_cau1(ar2, 5, 5);
    cout<<endl;

//______________________________________
    cout << "==== BAI 4 ====" << endl;

    double x[10] = {1.5, 7,3,5}, y[10] = {2.4, 5, 5, 7};

    cout<<"Cau 1:"<<endl;
    Bai4_cau1(x,y,3);
    cout<<endl;

    cout<<"Cau 2:"<<endl;
    Bai4_cau2(x,y,3);
    cout<<endl;
    return 0;
}
//D:\File\c++\Anh\main.cpp|61|error: declaration of 'a' as multidimensional array must have bounds for all dimensions except the first|
