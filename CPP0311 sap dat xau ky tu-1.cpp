#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	map<char, int> mp;
	char max;
	int dem = 0;
	for(int i = 0; i < s.length(); i++){
		mp[s[i]]++; // dem tan suat cua tung chu cai
		if(mp[s[i]] > dem){
			max = s[i]; // tim chu cai co tan xuat lon nhat
			dem = mp[s[i]]; // tan suat lon nhat cua chu cai vua tim 
		}
	}
	if(mp[max] - 1 > s.length() - mp[max]){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
