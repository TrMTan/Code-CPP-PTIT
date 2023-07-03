#include<bits/stdc++.h>

using namespace std;

int ktso(string s){
	if(s[s.size() - 1] % 2 == 0){
		return 0;
	}
	if(s[s.size() - 1] % 2 == 1){
		return 1;
	}
}
void dayuuthe(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	string word;
	while(ss >> word){
		v.push_back(word);
	}
	int chan = 0, le = 0;
	for(auto it : v){
		if(ktso(it) == 1){
			le++;
		}else{
			chan++;
		}
	}
	int check = 0;
	if(chan > le && v.size() % 2 == 0){
		check = 1;
	}
	if(chan < le && v.size() % 2 == 1){
		check = 1;
	}
	if(check == 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		dayuuthe();
	}
}
