#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int x : s){
        cout << x << " ";
    }
}


int main(){
   check();
}