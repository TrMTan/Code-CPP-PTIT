#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int tong(int n){
	int sum = 0;
	while(n > 0){
		int r = n % 10;
		sum += r;
		n /= 10;
	}
	return sum;
}

int smith(int n){
	int sum1 = tong(n);
	int sum2 = 0;
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum2 += tong(i);
			n /= i;
		}
	}
	if(tmp == n){
		return 0;
	}
	if(n != 1){
		sum2 += tong(n);
	}
	return sum1 == sum2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(!snt(n) && smith(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}




