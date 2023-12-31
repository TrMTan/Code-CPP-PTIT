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

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	set<int> se;
	for(int i = 0; i < n; i++){
		if(snt(a[i][i])){
			se.insert(a[i][i]);
		}
		if(snt(a[i][n - i - 1])){
			se.insert(a[i][n - i - 1]);
		}
	}
	cout << se.size() << endl;
}
