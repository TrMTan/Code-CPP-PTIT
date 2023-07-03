#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b, c, d, x, y;
	cin >> a >> b >> c >> d >> x >> y;
	if(x > a && x < c && y > b && y < d){
		cout << "YES";
	}else if(x > c && x < a && y > d && y < b){
		cout << "YES";
	}else if(x > c && x < a && y < d && y > c){
		cout << "YES";
	}else{
		cout << "NO";
	}
}

