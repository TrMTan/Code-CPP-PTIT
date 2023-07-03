#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	for(auto x : s){
		cout << x << " ";
	}
}

int main(){
	check(); 
	return 0;
}
