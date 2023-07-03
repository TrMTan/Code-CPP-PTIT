#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream IP("N3S.INP", ios::in);
	ofstream OP("N3S.OUT", ios::out);
	int t;
	IP >> t;
	while(t--){
		int k, m;
		IP >> k >> m;
		int N = 0;
		for(int i = 1; i <= k; ){
			N += 1;
			if((N * N - 1) % 3 == 0){
				i++;
			}
		}
		OP << (N * N - 1) % m << "\n";
	}	
	IP.close();
	OP.close();
}
