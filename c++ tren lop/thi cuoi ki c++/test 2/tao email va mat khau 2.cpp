#include<bits/stdc++.h>

using namespace std;

string vt(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string ns = v[v.size() - 1]; // tu cuoi lay ra ngay sinh
		string email = vt(v[v.size() - 2]); // lay ra ten
		for(int i = 0; i < v.size() - 2; i++){
			email += tolower(v[i][0]);
		}
		mp[email]++;
		if(mp[email] == 1) cout << email << "@xyz.edu.vn" << endl;
		else{
			cout << email << mp[email] << "@xyz.edu.vn" << endl;
		}
		stringstream ss2(ns);
		while(getline(ss2, tmp, '/')){
			cout << stoi(tmp);
		}
		cout << endl;
	}
}
