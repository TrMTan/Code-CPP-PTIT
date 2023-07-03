#include<bits/stdc++.h>

using namespace std;

string cong(string a, string b){
	if(a.length() < b.length()){
		a.insert(0, b.length() - a.length(), '0');
	}
	if(b.length() < a.length()){
		b.insert(0, a.length() - b.length(), '0');
	}
	string res = "";
	int nho = 0;
	for(int i = a.length() - 1; i >= 0; i--){
		nho = (a[i] - '0') + (b[i] - '0') + nho;
		res.insert(0, 1, nho % 10 + '0');
		nho /= 10;
	}
	if(nho > 0){
		res.insert(0, 1, nho  + '0');
	}
	return res;
}

string nhan(char a, string b){
	int nho = 0;
	string res;
	for(int i = b.length() - 1; i >= 0; i--){
		nho = (a - '0') * (b[i] - '0') + nho;
		res.insert(0, 1, nho % 10 + '0');
		nho /= 10;
	}
	if(nho > 0){
		res.insert(0, 1, nho  + '0');
	}
	return res;
}

void check(){
	string a, b;
	cin >> a >> b;
	int len = a.length();
	string s, res = "";
	for(int i = len - 1; i >= 0; i--){
		s = nhan(a[i], b);
		s.insert(s.length(), len - i - 1, '0');
		res = cong(res, s);
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
