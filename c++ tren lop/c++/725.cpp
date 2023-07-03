#include<bits/stdc++.h>

using namespace std;

int c[1005][1005];
// luu to hop chap j cua i
const int MOD = 1e9 + 7;

void check(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j){
				c[i][j] = 1;
			}else{
				c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	check();
	while(t--){
		int n, r;
		cin >> n >> r;
		cout << c[n][r] << endl;
	}	
}

