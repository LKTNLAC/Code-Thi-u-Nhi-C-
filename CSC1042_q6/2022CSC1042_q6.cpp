#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

string s;
long i,dem=0;

class Location
{
private:
    double longitude;
    double latitude;

public:
    Location(double lon, double lat) : longitude(lon), latitude(lat) {}

    double getLongitude() const {
        return longitude;
    }

    double getLatitude() const {
        return latitude;
    }

};

int main()
{
    long a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;

    Location lo1(a,b);
    Location lo2(c,d);

    long sumlon = lo1.getLongitude() + lo2.getLongitude();
    long sumlat = lo1.getLatitude() + lo2.getLatitude();


    cout << "Longitude 1: " << lo1.getLongitude() << endl;
    cout << "Latitude 1: " << lo1.getLatitude() << endl;
    cout << "Longitude 2: " << lo2.getLongitude() << endl;
    cout << "Latitude 2: " << lo2.getLatitude() << endl;
    cout << "Sum longtitude: " << sumlon << endl;
    cout << "Sum latitude: " << sumlat << endl;

    return 0;
}

