#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	string so = "";
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c') so += '2';
		if(s[i] == 'd' || s[i] == 'e' || s[i] == 'f') so += '3';
		if(s[i] == 'g' || s[i] == 'h' || s[i] == 'i') so += '4';
		if(s[i] == 'j' || s[i] == 'k' || s[i] == 'l') so += '5';
		if(s[i] == 'm' || s[i] == 'n' || s[i] == 'o') so += '6';
		if(s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's') so += '7';
		if(s[i] == 't' || s[i] == 'u' || s[i] == 'v') so += '8';
		if(s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z') so += '9';
	}
	string tmp = so;
	reverse(tmp.begin(), tmp.end());
	if(tmp == so){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
