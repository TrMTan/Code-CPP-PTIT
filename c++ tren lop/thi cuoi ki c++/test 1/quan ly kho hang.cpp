#include<bits/stdc++.h>

using namespace std;

struct MH{
	string ma, ten, hang, dv;
	int nhap, ban;
};

string mamh(string s){
	string res = "";
	string tmp;
	stringstream ss(s);
	while(ss >> tmp){
		res += toupper(tmp[0]);
	}
	return res;
}

bool cmp(MH a, MH b){
	int lai1 = a.ban - a.nhap;
	int lai2 = b.ban - b.nhap;
	if(lai1 != lai2){
		return lai1 > lai2;
	}else{
		return a.ma < b.ma;
	}
}

int main(){
	int n; cin >> n;
	vector<MH> v; 
	map<string, int> mp;
	for(int i = 0; i < n; i++){
		cin.ignore();
		string ten; getline(cin, ten);
		string hang; getline(cin, hang);
		string dv; getline(cin, dv);
		int nhap, ban;
		cin >> nhap >> ban;
		// ma mat hang
		string ma = mamh(ten);
		mp[ma]++;
		string tmp = to_string(mp[ma]);
		while(tmp.size() < 4){
			tmp = "0" + tmp;
		}
		ma = ma + tmp;
		MH x{ma, ten, hang, dv, nhap, ban};
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		cout << it.ma << " " << it. ten << " " << it.hang << " " << it.dv << " " << it.nhap << " " << it.ban << endl;
	}
}
