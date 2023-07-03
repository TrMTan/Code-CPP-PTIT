#include<bits/stdc++.h>

using namespace std;

void check() {
	int n, k; cin >> n >> k;
	int a[n];
	int d = 0; // dem so phan tu <= k
	for(int i = 0; i < n; i++){  // cua so co kich thuoc d
		cin >> a[i];
		if(a[i] <= k) d++;
	}
	int cnt = 0;
	// xet cua so dau tien
	for(int i = 0; i < d; i++){
		if(a[i] <= k){
			cnt++;	// dem cua so dau tien co bn so < k
		} 
	}
	int ans = cnt;
	// xet tu cua so thu 2
	for(int i = d; i < n; i++){
		if(a[i - d] <= k) cnt--;  // kt ptu vua loai ra
		if(a[i] <= k) cnt++;
		ans = max(ans, cnt);
	}
	cout << d - ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
