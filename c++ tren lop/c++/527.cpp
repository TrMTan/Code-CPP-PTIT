#include<bits/stdc++.h>

using namespace std;

struct TG{
    int gio, phut, giay;
};

bool cmp(TG a, TG b){
    if(a.gio == b.gio){
        if(a.phut == b.phut){
            return a.giay < b.giay;
        }
        return a.phut < b.phut;
    }
    return a.gio < b.gio;
}

int main(){
    int n;
    cin >> n;
    TG a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
    }
}