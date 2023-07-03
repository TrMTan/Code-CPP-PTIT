#include <bits/stdc++.h>

using namespace std;

int n, k, a[100];

void sinhth(int m){
	int i;
	if(m > k){
		for(i = 1; i <= k; i++){
			cout << a[i];
		}
		cout << " ";
		return;
	}
	for(i = a[m - 1] + 1; i <= n + m - k; i++){
		a[m] = i;
		sinhth(m + 1);
	}
}

void check(){
	cin >> n >> k;
    sinhth(1);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	check();
	}
}
