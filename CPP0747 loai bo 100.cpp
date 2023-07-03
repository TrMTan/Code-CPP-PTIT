#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	int kq = 0;
	for(int i = 0; i < s.size() - 2; i++){
		if(s == "") break;
		if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
			kq += 3;
			s.erase(i, 3);
			i = -1;
		}
	}
	if(kq){
		cout << kq;
	}else{
		cout << "";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
