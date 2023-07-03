#include<bits/stdc++.h>

using namespace std;


void check(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	for(int i = 1; i <= n + 1; i++){
		if(mp[i] == 0){
			cout << i;
			break;
		}
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
