#include<bits/stdc++.h>

using namespace std;

void vt(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	vt(s); vt(t);
	set<string> se1, se2;
	string tmp;
	stringstream ss1(s);
	while(ss1 >> tmp){
		se1.insert(tmp);
	}
	stringstream ss2(t);
	while(ss2 >> tmp){
		se2.insert(tmp);
	}
	for(string x : se1){
		if(!se2.count(x)){
			cout << x << " ";
		}
	}
}
