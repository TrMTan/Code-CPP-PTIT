#include<bits/stdc++.h>

using namespace std;

int tong(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum >= 10){
	 	return tong(sum);
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << tong(n) << endl;;
	}
}
