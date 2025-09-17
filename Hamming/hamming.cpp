#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

long long m,n,i,maxk=0,dem=0;
long long a[10000001],x[10000001],b[10000001],c[10000001];

void input()
{
    long i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
}
void solve()
{
    /*
    while(i<=10000000)
    {
        a[i]=i;
        while(a[i]%2==0)
            a[i]=a[i]/2;
        while(a[i]%3==0)
            a[i]=a[i]/3;
        while(a[i]%5==0)
            a[i]=a[i]/5;
        if((a[i]<=1))
        {
            b[j]=i;
            c[j]=j;
            j++;
        }
        i++;
    }*/
    long long l=1,i,j,k,m;
    float ii=0.5,jj=1,kk=0.2;
    for(i=0;i<=60;i++)
    {
        ii=ii*2;
        for(j=0;j<=60;j++)
        {
            if(j==0)
                jj=1;
            else jj=jj*3;
            for(k=0;k<=60;k++)
            {
                kk=kk*5;
                a[l]=ii*jj*kk;
                dem++;
                //cout<<a[l]<<endl;
                l++;
            }
            kk=0.2;
        }

    }


}
void xep(long long a[100001],long long i, long long j)
{
    long long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long long l, long long r)
{
    long long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (a[i]<x)
            i=i+1;
        while (a[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(a,i,j);


            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}
long binarySearch( long long arr[], long long l, long long r, long long x) {
  if (r >= l) {
    long mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn

    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (arr[mid] == x)
      return mid;

    // Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);

    // Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
    return binarySearch(arr, mid + 1, r, x);
  }

  // Nếu không tìm thấy
  return -1;
}
void output()
{
    long long i,j,maxw=0,flag=0,kq;
    sortt(1,dem);
    for(i=1;i<=n;i++){
            /*
        for(j=1;j<=n;j++)
            if(x[i]==b[j]) {
                cout<<c[j]<<endl;
                flag=1;
                break;
            }
            if(flag==0)
                cout<<"Not in sequence"<<endl;
            flag=0;*/
            kq=binarySearch(a,1,dem,x[i]);
            if(kq==-1)
                cout<<"Not in sequence"<<endl;
            else
                cout<<kq-214293<<endl;

    }cout<<a[dem]-214293;
    //cout<<dem;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("hamming.inp","r",stdin);
    freopen("hamming.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
