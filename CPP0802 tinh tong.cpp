#include<bits/stdc++.h>

using namespace std;

long long kq = 0;

void check(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '-') continue;
		if(s[i] < '0' || s[i] > '9') return;
	}
	bool kt = 0;
	if(s[0] == '-'){
		s.erase(0, 1);
		kt = 1;
	}
	if(s.length() > 10) return;
	long long so = 0;
	for(int i = 0; i < s.length(); i++){
	   	so = so * 10 + s[i] - '0';
	}
	if(kt) so = -so;
	if(so <= INT_MAX && so >= INT_MIN) kq += so;
}

int main(){
	ifstream IP;
	IP.open("DATA.in");
	string s;
	while(IP >> s){
		check(s);
	}
	cout << kq;
}
