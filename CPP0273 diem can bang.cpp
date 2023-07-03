#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, kq = -1, sum = 0, sumleft = 0;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];	
		}
		for(int i = 0; i < n; i++){
			if(sum - a[i] == sumleft * 2){
				kq = i + 1;
				break;
			}
			sumleft += a[i];
		}
		cout << kq << endl;
	}
}
