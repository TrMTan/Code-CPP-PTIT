#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int x, y, check = 0;
	for(int i = n; i > 0; i--){
		int sum = 0;
		for(int j = i - 1; j > 0; j--){
			sum += j;
			if(sum == n){
				y = j;
				x = i;
				check = 1;
				break;
			}
		}
	}
	if(check == 0) cout << "IMPOSSIBLE";
	else{
		for(int i = y; i < x; i++){
			cout << i << " ";
		}
	}
}
