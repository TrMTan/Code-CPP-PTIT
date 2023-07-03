#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream IP1("DATA1.in");
	ifstream IP2("DATA2.in");
	string s;
	set<string> s1, s2, s3;
	while(IP1 >> s){
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
		s1.insert(s);
		s2.insert(s);
	}
	// luu tu trong DATA1 vao s1
	// s2 de luu hop hai file, s3 de luu giao cua hai file
	while(IP2 >> s){
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
		if(s1.find(s) != s1.end()) s3.insert(s); // doc trong DATA2 neu tim thay tu giong nhau trong DATA1 thi luu vao s3
		s2.insert(s);
	}
	for(auto x : s2) cout << x << " ";
	cout << endl;
	for(auto x : s3) cout << x << " ";
	return 0;
}
