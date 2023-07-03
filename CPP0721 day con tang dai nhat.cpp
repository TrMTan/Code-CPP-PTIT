#include<bits/stdc++.h>

using namespace std;

//quy hoach dong

void check(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> l(n, 1); // gan cac phan tu co gt la 1
	for(int i = 0; i < n; i++){
		// duyet qua tung phan tu dung truoc chi so i
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	sort(l.begin(), l.end());
	cout << l[n - 1] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
