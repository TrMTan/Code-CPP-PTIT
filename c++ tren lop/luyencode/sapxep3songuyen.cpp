#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b, c, max, min, max2;
	cin >> a >> b >> c;
	if(a > b){
		swap(b, a);
	}
	if(a > c){
		swap(c, a);
	}
	if(b > c){
		swap(c, b);
	}
	cout << c << ' ' << b << ' ' << a;
}
