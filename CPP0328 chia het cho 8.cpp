#include<bits/stdc++.h>

using namespace std;

int chiahet(string s, int n){
	int dem = 0;
	for(int i = 0; i < s.length(); i++){
		int sum = 0;
		for(int j = i; j < s.length(); j++){
			sum = sum * 10 + (s[j] - '0');
			sum %= n;
			if(sum == 0) dem++;
		}
	}
	return dem;
}

void check(){
	string s;
	cin >> s;
	cout << chiahet(s, 8) - chiahet(s, 24) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
