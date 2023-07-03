#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << fixed << setprecision(4) << (double) sqrt((c - a) * (c - a) + (d - b) *(d - b)) << endl;
    }
}