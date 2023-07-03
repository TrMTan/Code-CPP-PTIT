#include<bits/stdc++.h>

using namespace std;

long gt(int n){
	if (n <= 0)return 1;
	long *G = new long[n+1];
	long gt = 1;
	for (int i = 1; i <= n; i++){
		gt *= i;
		G[i] = gt;
	}
	long t = G[n];
	delete G;
	return t;
}

void pttsnt(long long &n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				mu++;
				n /= i;
			}
			cout << i << "^" << mu << " * ";
		}
		if(n == 1){
			break;
		}
	}
	if(n > 1){
		cout << n << "^1";
	}
	cout << endl;
}

int main(){
	long long n;
	cin >> n;
	long long r = gt(n);
	pttsnt(r);
}
