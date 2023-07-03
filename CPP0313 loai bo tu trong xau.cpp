#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	string x;
	cin >> x;
	stringstream ss(s);
	string token;
	vector<string> v;
	while(ss >> token){
		if(token != x){
			v.push_back(token);
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
		if(i != v.size() - 1){
			cout << " ";
		}
	}
	return 0;
}
