#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream IP("DATA.in");
	int n, m, x;
	IP >> n >> m >> x;
	set<int> s1, s2;
	for(int i = 0; i < n; i++){
		IP >> x;
		s1.insert(x);
	}
	for(int i = 0; i < m; i++){
		IP >> x;
		s2.insert(x);
	}
	map<int, int> mp;
	for(auto x : s1) mp[x]++;
	for(auto x : s2) mp[x]++;
	for(auto x : mp){
		if(x.second == 2){
			cout << x.first << " ";
		}
	}
	return 0;
}
