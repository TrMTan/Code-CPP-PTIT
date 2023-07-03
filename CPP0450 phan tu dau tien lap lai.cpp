#include<bits/stdc++.h>

using namespace std;
void phantudautienlaplai(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	int kq = -1, check = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[x]++;
		if(mp[x] == 2 && !check){
			kq = x;
			check = 1;
		}
	}
	cout << kq << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		phantudautienlaplai();
	}
}
