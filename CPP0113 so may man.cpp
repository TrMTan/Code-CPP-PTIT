#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a = s.length();
		if(s[a - 1] == 54 && s[a - 2] == 56){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
	return 0;
}
