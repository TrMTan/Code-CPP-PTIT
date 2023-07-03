#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string x = s;
		reverse(x.begin(), x.end());
		if(x == s){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
