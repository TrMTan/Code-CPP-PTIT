#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int xoa = s.find("084");
		string daxoa = s.erase(xoa, 3);
		cout << daxoa << endl;
	}
}
