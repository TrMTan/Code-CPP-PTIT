#include<bits/stdc++.h>

using namespace std;

long long check(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				mu++;
				n /= i;
			}
			if(mu >= 3){
				return true;
			}	
		}
	}
	return false;
}

int main(){
	long long n;
	cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
