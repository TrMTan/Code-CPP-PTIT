#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	string tmp;
	stringstream ss(s);
	while(getline(ss, tmp, '.')){
		v.push_back(tmp);
	}
	string res = "";
	for(int i = v.size() - 1; i >= 0; i--){
		res += v[i];
		res += ".";
	}
	res.erase(res.length() - 1);
	for(int i = 0; i < res.length(); i++){
		cout << res[i];
	}
}

