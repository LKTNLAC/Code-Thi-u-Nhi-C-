#include <bits/stdc++.h>
using namespace std;

//const int maxn = 1504;
long long i,j,n,a[4],d,e,f;
void input()
{
	cin>>d>>e>>f;
	a[1]=d;
	a[2]=e;
	a[3]=f;
}
void xep(long long a[100000],long long i, long long j)
{
    long long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long long l,long long r)
{
    long long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while(i<j)
    {
        while (a[i] < x) i=i+1;
        while (a[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a,i,j);
            //xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortt(i,r);
    if (l<j) sortt(l,j);
}
void output()
{
    long long x,y,z,tich=1;
    long i;
    x=min(d,min(e,f));
    z=max(d,max(e,f));
    sortt(1,3);
    tich=d*e*f;
    y=a[2];

    if(tich==sqrt(tich)*sqrt(tich))
        cout<<sqrt(tich);
    else
    {
        tich=tich*x;
        if(tich==sqrt(tich)*sqrt(tich))
            cout<<sqrt(tich);
        else
        {
            tich=tich*y;
            if(tich==sqrt(tich)*sqrt(tich))
                cout<<sqrt(tich);
            else
            {
                tich=tich*z;
                if(tich==sqrt(tich)*sqrt(tich))
                    cout<<sqrt(tich);
            }
        }
    }

    //cout << fixed << setprecision(5) << minn;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    input();
    output();
    return 0;
}
