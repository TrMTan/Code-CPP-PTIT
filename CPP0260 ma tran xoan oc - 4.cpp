#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int b[n * n], a[n][n];
	for(int i = 0; i < n * n; i++){
		cin >> b[i];
	}
	sort(b, b + n * n);
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1, gt = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = b[gt++];
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = b[gt++];
		}
		--c2;
		if(h1 <= h2){
			for(int i = c2; i >= c1; i--){
				a[h2][i] = b[gt++];
			}
			--h2;
		}
		if(c1 <= c2){
			for(int i = h2; i >= h1; i--){
				a[i][c1] = b[gt++];
			}
			++c1;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	check();
}
