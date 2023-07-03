#include<bits/stdc++.h>

using namespace std;

long long kq = 0;

void check(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '-') continue;
		if(s[i] < '0' || s[i] > '9') return;
	}
	// kt sos am
	bool kt = 0;
	if(s[0] == '-'){
		s.erase(0, 1);
		kt = 1;
	}
	if(s.length() > 10) return; // qua kieu int
	long long so = 0;
	for(int i = 0; i < s.length(); i++){
		so = so * 10 + (s[i] - '0');
	}
	if(kt) so = -so;
	if(so >= INT_MIN && so <= INT_MAX) kq += so; 
}

int main(){
	ifstream fi;
	fi.open("DATA.in");
	string s;
	while(fi >> s){
		check(s);
	}
	cout << kq;
}
