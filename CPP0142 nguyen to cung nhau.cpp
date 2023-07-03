#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n <= 3) return n > 1;
	else if(n % 2 == 0 || n % 3 == 0) 
		return false;
	int i = 5;
	while(i * i <= n){
		if( n % i == 0 || n % (i + 2) == 0){
			return false;
		}
		i += 6;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int d = 0;
		for(int i = 1; i <= x; i++){
			if(__gcd(i, x) == 1){
				d++;
			}
		}
		if(snt(d)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
}


