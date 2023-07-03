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
	int dem = 0;
	for(auto x : mp){
		if(x.second > 1){
			dem += x.second;
		} 
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
