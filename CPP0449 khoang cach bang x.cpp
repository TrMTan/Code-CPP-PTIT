#include<bits/stdc++.h>

using namespace std;

bool binary_search(int a[], int l, int r, int x){
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x) return 1;
		if(a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	return 0;
}

void check(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a +n);
	for(int i = 0; i < n; i++){
		if(a[i] + x > a[n - 1]) break;
		if(binary_search(a, 0, n - 1, a[i] + x)){
			cout << "1" << endl;
			return;
		} 
	}
	cout << "-1" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
