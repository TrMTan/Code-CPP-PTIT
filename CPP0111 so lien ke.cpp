#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void check(){
	string s;
	cin >> s;
	int kt = 0;
	for(int i = 1; i < s.length(); ++i){
		if(abs(s[i] - s[i - 1]) != 1){
			kt = 1;
		}
	}
	if(kt == 0){
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
