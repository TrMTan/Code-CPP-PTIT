#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
#define N 1000000
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	double sum[N];
	while(t--){
		int n;
		cin >> n;
		sum[1] = 1;
		for(int i = 2; i <= N; i++){
			sum[i] = sum[i - 1] + 1.0/i;
		}
		cout << fixed << setprecision(5) << sum[n];
	}
}
