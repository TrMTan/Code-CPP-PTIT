#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int daoso(int n){
	long long so = 0;
	while(n > 0){
		so = so * 10 + n % 10;
		n /= 10;
	}
	return so;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(daoso(a[i]) == a[i]){
			cout << a[i] << " ";
		}
	}
}
