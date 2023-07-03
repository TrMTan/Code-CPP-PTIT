#include<bits/stdc++.h>

using namespace std;

struct DoiBong{
	int diem, hieuso;
};

bool cmp(pair<string, DoiBong> a, pair<string, DoiBong> b){
	if(a.second.diem != b.second.diem){
		return a.second.diem > b.second.diem;
	}
	if(a.second.hieuso != b.second.hieuso){
		return a.second.hieuso > b.second.hieuso;
	}
	return a.first < b.first;
}

int main(){
	string s;
	map<string, DoiBong> mp;
	while(getline(cin, s)){
		string team1 = "", team2 = "";
		int i = 1;
		while(s[i] != ']'){  
			team1 += s[i]; ++i; // ten doi bong 1;
		}
		i += 2;
		int x = 0, y = 0;
		while(s[i] != ' '){
			x = x * 10 + (s[i] - '0'); // so lan ghi ban cua doi 1
			++i;
		}
		i += 3;
		while(s[i] != ' '){
			y = y * 10 + (s[i] - '0');  // so lan ghi ban cua doi 2
 			++i;
		}
		i += 2;
		while(i < s.size() - 1){
			team2 += s[i];  // ten doi bong 2
			++i;
		}
		if(mp.count(team1) == 0){
			mp[team1].diem = mp[team1].hieuso = 0;  // neu doi 1 chua gap bao gio thi diem = hieu so = 0
		}
		if(mp.count(team2) == 0){
			mp[team2].diem = mp[team2].hieuso = 0;   // neu doi 2 chua gap bao gio thi diem = hieu so = 0
		}
		if(x > y){
			mp[team1].diem += 3;
		}else if(x < y){
			mp[team2].diem += 3;
		}else{
			mp[team1].diem += 1; mp[team2].diem += 1;
		}
		mp[team1].hieuso += x - y;
		mp[team2].hieuso += y - x;
	}
	vector<pair<string, DoiBong>> v;
	for(auto it : mp){
		v.push_back(it);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		cout << it.first << " " << it.second.diem << " " << it.second.hieuso << endl;
	}
}


