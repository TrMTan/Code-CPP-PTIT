#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				mu++;
				n /= i;
			}
			cout << i << " " << mu << endl;
		}
		if(n == i){
			break;
		}
	}
	if(n > 1){
		cout << n << " 1" << endl;
	}
}

int main(){
	check();
	return 0;
}
