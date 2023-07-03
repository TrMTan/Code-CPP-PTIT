#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	int a[n];
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	int tmp = n / 2;
	int kq = -1;
	for(auto it : mp){
		if(it.second > tmp){
			kq = it.second;
			break;
		}
	} 
	cout << kq << endl;
}
