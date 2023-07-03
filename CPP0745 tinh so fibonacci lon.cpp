#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int mod = 1e9 + 7;
		long long fb[1001];
		fb[0] = 0;
		fb[1] = 1;
		for(int i = 2; i < 1001; i++){
			fb[i] = fb[i - 1] + fb[i - 2];
			fb[i] %= mod;
		}
		cout << fb[n] << endl;
	}
}
