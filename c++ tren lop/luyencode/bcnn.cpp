#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	while(b > 0){
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long a, b;
    cin >> a >> b;
    cout <<a * b / gcd(a, b);
}
