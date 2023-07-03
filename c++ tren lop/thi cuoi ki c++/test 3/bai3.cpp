#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1005][1005];
long long f1[1005][1005], f2[1005][1005]; // f1 de cong don theo hang, f2 de cong don theo cot

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			f1[i][j] = f1[i][j - 1] + a[i][j]; // luu tong cac ptu o hang i tu cot 1 toi j
			f2[i][j] = f2[i - 1][j] + a[i][j]; // luu tong cac phan tu o cot j tu hang 1 toi hang j
		}
	}
	int q; cin >> q;
	while(q--){
		int tv; cin >> tv;
		if(tv == 1){
			int x, y, z;
			cin >> x >> y >> z;
			cout << f1[x][z] - f1[x][y - 1] << endl; // lay tong ptu hang x cot z tru di ptu hang x cot y - 1
		}else{
			int u, v, t;
			cin >> u >> v >> t;
			cout << f2[t][u] - f2[v - 1][u] << endl; // lay tong ptu hang t cot u tru di ptu hang v - 1 cot u
		}
	}	
}
