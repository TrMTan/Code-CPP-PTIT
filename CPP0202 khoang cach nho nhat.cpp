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
	int min = abs(a[0] - a[1]);
	for(int i = 0; i < n; i++){
		if(a[i] - a[i - 1] < min){
			min = abs(a[i] - a[i - 1]);
		}
	}
	cout << min << endl;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
