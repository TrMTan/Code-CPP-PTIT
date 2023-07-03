#include<bits/stdc++.h>

using namespace std;

vector<bool> v(1e4 + 1, 1);

void sangnt(){
	v[0] = v[1] = 0;
	for(int i = 2; i <= 100; i++){
		if(v[i]){
			for(int j = i * i; j <= 1e4; j += i){
				v[j] = 0;
			}
		}
	}
}

void check(){
	int n;
	cin >> n;
	for(int i = 2; i <= n / 2; i++){
		if(v[i] && v[n - i]){
			cout << i << " " << n - i << endl;
			return;
		}
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		check();
	}
}
