#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	map<string, pair<string, bool>> mp;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		string tmp; 
		vector<string> v;
		stringstream ss(s);
		// tach msv vs ho ten
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string msv = v[0], hoten = "";
		for(int i = 1; i < v.size(); i++){
			hoten += v[i] + " ";
		}
		hoten.pop_back(); // xoa bo " "
		mp[msv].first = hoten;
		mp[msv].second = true; // tat ca deu du thi
	}
	int m; cin >> m;
	set<string> duthi;
	for(int i = 0; i < m; i++){
		string ngay, gio, id, web;
		cin >> ngay >> gio >> id >> web;
		if(web != "code.ptit.edu.vn"){
			mp[id].second = false;
		}
		if(web == "code.ptit.edu.vn"){
			duthi.insert(id);
		}
	}
	for(auto it : mp){
		cout << it.first << " " << it.second.first << " ";
		if(it.second.second == false || duthi.count(it.first) == 0){ // kt neu truy cap web la hoac 0 co trong ds du thi
			cout << "FAIL";
		}else{
			cout << "OK";
		}
		cout << endl;
	}
}
