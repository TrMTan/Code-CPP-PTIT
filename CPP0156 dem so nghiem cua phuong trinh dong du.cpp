#include<bits/stdc++.h>

using namespace std;

void check(){
	long long b, p;
	cin >> b >> p;
	long long kq = 0;
	for(long long i = 1; i < p; i++){
		if((i * i) % p == 1){
			long long end = (b / p) * p + i; // tim ra so cuoi
			if(end > b) 
				end -= p; // neu so cuoi lon hon b thi tru p
			kq += ((end - i) / p) + 1; // kq = [(so cuoi - so dau) / p] + 1 
		}
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}

// quy luat cach nhau p
