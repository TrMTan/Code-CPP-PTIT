#include<bits/stdc++.h>

using namespace std;

string tru(string a, string b){
	int len = max(a.length(), b.length());
	while(a.length() < len){
		a = "0" + a;
	}
	while(b.length() < len){
		b = "0" + b;
	}
	if(a < b){
		swap(a, b);
	}
	string res = " ";
	int nho = 0;
	for(int i = len - 1; i >= 0; i--){
		int tmp = (a[i] - '0') - (b[i] - '0') - nho;
		if(tmp < 0){
			nho = 1;
			tmp += 10;
		}else{
			nho = 0;
		}
		res = (char)(tmp + '0') + res;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << tru(s1, s2) << endl;
	}
}
