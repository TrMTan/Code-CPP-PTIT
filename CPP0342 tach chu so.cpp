#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	string tmp = "";
	int tong = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tong += s[i] - '0';
		}
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			tmp += s[i];
		}
	}
	sort(tmp.begin(), tmp.end());
	cout << tmp << to_string(tong) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}

/*
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		multiset<char> se;
		int tong = 0;
		for(char x : s){
		    if(isalpha(x)){
		        se.insert(x);
		    }else{
		        tong += x - '0';
		    }
		}
		for(char x : se){
		    cout << x;
		}
		cout << tong;
		cout << endl;
	}
}
*/
