#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	long long sum = 0, tmp = 1;
	for(int i = s.length() - 1; i >= 0; i--){
		sum += (s[i] - '0') * tmp;
		tmp *= 2;
		tmp %= 10;
		sum %= 10;
	}
	if(sum % 5 == 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
