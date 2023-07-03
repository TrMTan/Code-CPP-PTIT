#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int check(long long n){
	for(int i = 1; i <= 32; i++){
		if(snt(i)){
			int tmp = (int)pow(2, i) - 1;
			if(snt(tmp)){
				long long shh = (long long)tmp * (int)pow(2, i - 1);
				if(shh == n){
					return 1;
				}
			}
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
}
