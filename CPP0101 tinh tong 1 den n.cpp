#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long t = (long long)n * (1 + n) / 2;
		cout << t << endl;
	}
	return 0;
}
