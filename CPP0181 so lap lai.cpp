#include<bits/stdc++.h>

using namespace std;

void check(){
	int a, x, y;
	cin >> a >> x >> y;
	int t = __gcd(x, y);
	for(int i = 0; i < t; i++){
		cout << a;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
