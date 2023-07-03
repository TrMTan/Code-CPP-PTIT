#include<bits/stdc++.h>

using namespace std;

void check(){
	long x, y, p;
	cin >> x >> y >> p;
	long t = 1;
	for(int i = 0; i < y; i++){
		t = (t * x) % p;
	}
	cout << t << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}

