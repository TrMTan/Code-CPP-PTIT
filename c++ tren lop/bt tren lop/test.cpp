#include<bits./stdc++.h>

using namespace std;

bool check(int n){
	int t = sqrt(n);
	if(t * t == n){
		return true;
	}
	return false;
}

int main(){
	ifstream IP("N3S.INP", ios::in);
	ofstream OP("N3S.OUT", ios::out);
	int t;
	IP >> t;
	while(t--){
		int k, m;
		IP >> k >> m;
		if(k == 1) OP << 0 << "\n";
		else{
			int kt = 2;
			int N = 3;
			while(kt < k){
				N += 3;
				if(check(N + 1)){
					kt++;
				}
			}
			OP << N % m << "\n";
		}
	}
	IP.close();
	OP.close();
	return 0;
}
