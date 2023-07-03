#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][3];
	int kq = 0;
	for(int i = 0; i < n; i++){
		int tong = 0;
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			tong += a[i][j];
		}
		if(tong >= 2){
			++kq;
		}
	}
	cout << kq << endl;
	return 0;
}
