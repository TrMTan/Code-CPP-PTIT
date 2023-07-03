#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	set<string> ss;
	for(int i = 1; i <= t; i++){
		string s;
		getline(cin, s);
		ss.insert(s);
	}
	cout << ss.size();
}
