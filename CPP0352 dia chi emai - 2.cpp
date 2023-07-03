#include<bits/stdc++.h>

using namespace std;

void check(vector<string> &res){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	string ans = v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++){
		ans += v[i][0];
	}
	res.push_back(ans);
} 

int main(){
	int t;
	cin >> t;
	cin.ignore();
	vector<string> res;
	while(t--){
		check(res);
	}
	for(int i = 0; i < res.size(); i++){
		int dem = 0;
		for(int j = 0; j < i; j++){
			if(res[i] == res[j]){
				dem++;
			}
		}
		cout << res[i];
		if(dem > 0){
			cout << dem + 1;
		}
		cout <<  "@ptit.edu.vn" << endl;
	}
}
