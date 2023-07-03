#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int a = s.size();
	if(a == 2){
		cout << "0" << s[a - 2] << s[a - 1]; 
	}else if(a == 1){
		cout << "0" << "0"<< s[s.size() - 1];
	}else if(a == 0){
		cout << "0" << "0" << "0";
	}else if(a > 2){
		cout << s[a - 3] << s[a - 2] << s[a - 1];
	}
}
