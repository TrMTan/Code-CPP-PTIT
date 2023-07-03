#include<bits/stdc++.h>

using namespace std;

int check(int n, int k){
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
				++dem;
				if(dem == k){
					return i;
				}
			}
		}
	}
	if(n != 1){
		++dem;
	}
	if(dem == k){
		return n;
	}else{
		return -1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
}
