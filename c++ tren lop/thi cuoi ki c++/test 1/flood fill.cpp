#include<bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[100][100];
int dem = 0;

void Try(int i, int j, int x){
	dem++;
	a[i][j] = 900;
	for(int k = 0; k < 8; k++){
		int i1 = dx[k] + i;
		int j1 = dy[k] + j;
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == x){
			Try(i1, j1, x);
		}
	} 
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	map<int, vector<int>> mp;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] != 900){
				int tmp = a[i][j]; // luu bien cu ve 0
				dem = 0;
				Try(i, j, tmp);
				mp[tmp].push_back(dem);
			}
		}
	}
	for(auto it : mp){
		sort(it.second.begin(), it.second.end());
		cout << it.first << " : ";
		for(int x : it.second){ // luu gia tri
			cout << x << " ";
		}
		cout << endl;
	}
}
