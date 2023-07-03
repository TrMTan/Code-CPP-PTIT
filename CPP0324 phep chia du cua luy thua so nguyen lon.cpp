#include<bits/stdc++.h>

using namespace std;

long long chiadu(string a, long long M){	
	long long kq = 0;
	int l = a.length();
	for(int i = 0; i < l; i++){
		kq = (kq * 10 + a[i] - '0') % M;
	}
	return kq;
}

long long mu(long long a, long long b, long long M){
	if(b == 0) return 1;
	if(b == 1) return a % M;
	long long t = mu(a, b / 2, M);
	long long r = t * t % M;
	if(b % 2 == 0) return r;
	return r * a  % M;
}

void check(){
	string a;
	long long b, M;
	cin >> a >> b >> M;
	long long x = chiadu(a, M);
	cout << mu(x, b, M) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
