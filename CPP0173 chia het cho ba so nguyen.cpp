#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long ucln(long long a, long long b){
	return a * b / bcnn(a, b);
}

void check(){
	int x, y, z, n;
	cin >> x >> y >> z >> n;
	long long bc = ucln(ucln(x, y),z);
	long long m = (long long)pow(10, n - 1);
	if(bc >= m * 10){
		cout << "-1" << endl;
	}else{
		cout << (long long) (m + bc - 1) / bc * bc << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
