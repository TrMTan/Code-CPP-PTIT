#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[1001], b[1001];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	int maxlen = 0;
	for(int i = 0; i < n; i++){
		int sum1 = 0, sum2 = 0;
		for(int j = i; j < n; j++){
			sum1 += a[j];
			sum2 += b[j];
			if(sum1 == sum2){
				maxlen = max(maxlen, j - i + 1);
			}
		}
	}	
	cout << maxlen << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
