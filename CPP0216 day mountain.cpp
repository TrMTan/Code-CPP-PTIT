#include<bits/stdc++.h>

using namespace std;

int max(int a[], int l, int r){
	int max = a[l], k = l;
	for(int i = l; i <= r; i++){
		if(a[i] > max){
			max = a[i];
			k = i;
		}
	}
	return k;
}

bool mountain(int a[], int l, int r){
	int index = max(a, l, r);
	for(int i = l; i < index; i++){
		if(a[i] > a[i + 1]){
			return false;
		}
	}
	for(int i = index; i < r; i++){
		if(a[i] < a[i + 1]){
			return false;
		}
	}	
	return true;
}

void check(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l, r;
	cin >> l >> r;
	if(mountain(a, l, r)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
