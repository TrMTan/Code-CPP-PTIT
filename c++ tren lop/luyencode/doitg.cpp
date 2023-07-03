#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	if(n / 3600 < 10) cout << "0";
		cout << n / 3600 << ":";
	if((n / 60) % 60 < 10) cout <<"0";
		cout << (n / 60) % 60 << ":";  
	if(n % 60 < 10) cout << "0";
		cout << n % 60;
}
