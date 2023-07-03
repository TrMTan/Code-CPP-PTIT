#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	double a[100000];
	int n;
	a[1] = 1;
	for(int i = 2; i <= 100000; ++i){
		a[i] = a[i - 1] + 1.0/i;
	}
	for(int i = 0; i < t; ++i){
		cin >> n;
		cout << fixed << setprecision(5) << a[n] << endl;
	}
}
