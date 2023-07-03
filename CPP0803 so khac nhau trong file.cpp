#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream f;
	f.open("DATA.in");
	int n;
	map<int, int> mp;
	while(f >> n){
		mp[n]++;
	}
	f.close();
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
}
