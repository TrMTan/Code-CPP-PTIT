#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int so = 0;
	vector<string> v;
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			so = so * 10 + (s[i] - '0');
		}else{
			so = 0;
		}
	}
	for(auto it : v){
		cout << it << " ";
	}
}
