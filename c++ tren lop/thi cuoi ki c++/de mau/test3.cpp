#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream IP;
	IP.open("DaTa.in");
	string s;
	long long sum = 0;
	while(IP >> s){
		if(s.size() >= 1 && s.size() <= 10 && isdigit(s[0])){
			sum += stoi(s);
		} 
	}
	cout << sum;
	return 0;
}
