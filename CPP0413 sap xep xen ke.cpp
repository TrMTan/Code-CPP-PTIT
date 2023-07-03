#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int l = 0, r = n - 1;
	for(int i = l; i <= r; i++){
		if(l == r){
			cout << a[l];
			break;
		}else{
			cout << a[r] << " " << a[l] << " ";
		}
		++l;
		--r;
	}
	cout << endl;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
