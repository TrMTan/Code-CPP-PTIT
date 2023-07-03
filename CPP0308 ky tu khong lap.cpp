#include<bits/stdc++.h>

using namespace std;

void kytukhonglap(){
	string s;
	getline(cin, s);
	map<char, int> mp;
	for(char x : s){
		mp[x]++;
	}
	for(char x : s){
		if(mp[x] == 1){
			cout << x;
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		kytukhonglap();
	}
}

