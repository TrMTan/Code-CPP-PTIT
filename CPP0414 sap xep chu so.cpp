#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	int a[10] = {0};
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			a[s[i] - '0'] = 1;
		}
	}
	for(int i = 0; i < 10; i++){
		if(a[i]){
			cout << i << " ";
 		}
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
