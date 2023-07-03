#include<bits/stdc++.h>

using namespace std;

int n, a[105][105], f[105][105];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		f[i][1] = a[i][1]; // gan cot 1 cua ma tran a vao ma tran f
		f[0][i] = f[n + 1][i] = -1e9; // bien cua ma tran f la 1 so rat be		
	}
	for(int j = 1; j <= n; j++){
		for(int i = 1; i <= n; i++){
			f[i][j] = max({f[i][j - 1], f[i - 1][j - 1], f[i + 1][j - 1]}) + a[i][j];
		}
	}
	int ans = -1e9;
	for(int i = 1; i <= n; i++){
		ans = max(ans, f[i][n]);
	}
	cout << ans << endl;
}
