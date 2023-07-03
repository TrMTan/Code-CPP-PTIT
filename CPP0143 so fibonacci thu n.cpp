#include<bits/stdc++.h>

using namespace std;

long long fb[100];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		fb[1] = 1;
		fb[2] = 1;
		for(int i = 3; i <= n; i++){
			fb[i] = fb[i - 1] + fb[i - 2];
		}
		cout << fb[n] << endl;
	}
}
