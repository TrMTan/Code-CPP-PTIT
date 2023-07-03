#include<bits/stdc++.h>

using namespace std;

int snt[100001];

void sang(){
	for(int i = 1; i <= 100000; i++){
		snt[i] = i;
	}
	for(int i = 2; i <= sqrt(100000); i++){
		if(snt[i] == i){
			for(int j = i * i; j <= 100000; j += i){
				if(snt[j] == j){
					snt[j] = i;
				}
			}
		}
	}	
}

int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cout << snt[i] << " ";
		}
		cout << endl;
	}
}
