#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float x1,y1,x2,y2,x3,y3,p,s,a,b,c;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<setprecision(2)<< fixed;
    cout << p*2 << endl;
    cout << s << endl;
    return 0;
}
