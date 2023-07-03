#include<bits/stdc++.h>

using namespace std;

void daotu(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	stack<string> st;
	while(ss >> token){
		st.push(token);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		daotu();
	}
}
