#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	map <int, int> mp;
	long long x;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x >= 0 && x <= n) mp[x]++;
	}
	for(int i = 0; i < n; i++){
		if(mp[i] > 0){
			cout << i << " ";
		}else{
			cout << -1 << " ";
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
