#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		int ans = 0, tmp = p;
		while(tmp <= n){
			ans += n / tmp;
			tmp = tmp * p;
		}
		cout << ans << endl;
	}
}
