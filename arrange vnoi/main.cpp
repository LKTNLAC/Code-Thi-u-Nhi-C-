#include <bits/stdc++.h>
using namespace std;
#define MAX 20
long long a[100001],k,i,flag=0;
long Bool[MAX] = { 0 };
long A[MAX];
void input()
{
	for(i=1;i<=6;i++)
	{
	    cin>>a[i];
	}
	cin>>k;
}

void in() {

        long long c1,c2,c3,c4,c5,c6;
        c1=A[1];
	    c2=A[2];
	    c3=A[3];
	    c4=A[4];
	    c5=A[5];
	    c6=A[6];
	    if(c1+c2*c2+c3*c3*c3+c4*c4*c4*c4+c5*c5*c5*c5*c5+c6*c6*c6*c6*c6*c6==k)
	    {
	        cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<" ";
	        flag=1;
	    }
}

void dequy(int k) {
    for (int i = 1; i <= 6; i++) {
        if (!Bool[i]) {
            A[k] = a[i];
            Bool[i] = 1;
            if ((k == 6)&&(flag==0))
                in();
            else
                dequy(k + 1);
            Bool[i] = 0;
        }
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("arrange.inp","r",stdin);
    //freopen("arrange.out","w",stdout);
    input();
    dequy(1);
    //output();
    return 0;
}
