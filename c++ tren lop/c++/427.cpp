#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0;
    for(int i = 0; i  < n; i++){
        if(a[i] == a[i + 1]){
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] != 0){  
            cout << a[i] << " ";
        }else{
            dem++;
        }
    }
    for(int i = 0; i < dem; i++){
        cout << "0" << " ";
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}