#include <bits/stdc++.h>

using namespace std;

long long a[1000000],n,q,i,x,k;

long checkfirst(long long k, long e)
{
    long l=e,r=n,pos=-1,m=0;
    while (l<=r)
    {
        m=(l+r)/2;
        if(a[m]==k)
            pos=m;
        if(k<=a[m])
            r=m-1;
        else l=m+1;
    }
    return pos;
}

long checkend(long long k, long e)
{
    long l=e,r=n,pos=-1,m=0;
    while (l<=r)
    {
        m=(l+r)/2;
        if(a[m]==k)
            pos=m;
        if(k>=a[m])
            l=m+1;
        else r=m-1;
    }
    return pos;
}
void vet()
{
    long dem=0,i,j,k;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            for(k=j+1;k<=n;k++)
            {
                if(a[i]+a[j]==a[k])
                    dem++;
            }
    cout<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sqrtri.inp","r",stdin);
    freopen("sqrtri.out","w",stdout);


    cin>>n;
    long i,j,dem=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]*a[i];
    }
    if(n<=400)
    {
        vet();
        return 0;
    }
    sort(a+1,a+n+1);

    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k=a[i]+a[j];
            long tam,l,r;
            l=checkfirst(k,j);
            r=checkend(k,j);
            if((l<0)||(r<0))
                tam=0;
            else tam=r-l+1;
            dem=dem+tam;
        }
    }

    cout<<dem;

    return 0;
}
