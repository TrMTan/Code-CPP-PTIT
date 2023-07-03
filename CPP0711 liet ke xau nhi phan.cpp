#include<bits/stdc++.h>

using namespace std;

int n, x[100], check;

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

void sinhnp(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		i--;
	}
	if(i == 0){
		check = 0;
	}else{
		x[i] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		check = 1;
		ktao();
		while(check){
			for(int i = 1; i <= n; i++){
				cout << x[i];
			}
			cout << " ";
			sinhnp();
		}
		cout << endl;
	}
}

/* cach dung quay lui
#include <bits/stdc++.h>

using namespace std;

int n, x[1000];

void sinhnp(int m){
	int i;
	if(m > n){
		for(i = 1; i <= n; i++){
			cout << x[i];
		}
		cout << " ";
		return;
	}
	for(i = 0; i <= 1; i++){
		x[m] = i;
		sinhnp(m + 1);
	}
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	sinhnp(1);
    	cout << endl;
	}
}*/
