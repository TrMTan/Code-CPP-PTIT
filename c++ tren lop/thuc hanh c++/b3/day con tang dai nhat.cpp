#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[n], l[n], kq = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		l[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				l[i] = max(l[i], l[j] + 1);
			}
		}
		kq = max(kq, l[i]);
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
