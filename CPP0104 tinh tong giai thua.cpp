#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin >> n;	
	long long sum = 0, tich = 1;
	for(long long i = 1; i <= n; ++i){
		tich *= i;
		sum += tich;
	}
	cout << sum;	
}
