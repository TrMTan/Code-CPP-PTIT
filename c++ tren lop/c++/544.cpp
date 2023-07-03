#define PI 3.141592653589793238

#include<bits/stdc++.h>

using namespace std;

struct Point{
    double x, y;
};

double kc(Point a, Point b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double ab, ac, bc;
        ab = kc(a, b);
        ac = kc(a, c);
        bc = kc(b, c);
        if(ab + ac > bc && ab + bc > ac && bc + ac > ab){
            double p = (ab + ac + bc) / 2;
            double dt = sqrt(p * (p - ab) * (p - ac) * (p - bc));
            double r = ab * ac * bc / (4 * dt);
            cout << fixed << setprecision(3) << PI * r * r << endl; 
        }else{
            cout << "INVALID";
        }
        cout << endl;
    }
}