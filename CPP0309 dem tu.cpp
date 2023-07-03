#include<bits/stdc++.h>

using namespace std;

void demtu(){
	string s;
	getline(cin, s);
	int dem = 0;
	stringstream ss(s);
	string token;
	while(ss >> token){
		dem++;
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		demtu();
	}
}
