#include<bits/stdc++.h>

using namespace std;

string de1 = "ABBADCCABDCCABD";
string de2 = "ACCABCDDBBCDDBB";

void check(){
	int n;
	cin >> n;
	double diem = 0;
	if(n == 101){
		for(int i = 0; i < 15; i++){
			char c;
			cin >> c;
			if(c == de1[i]){
				diem += 2.0 / 3;
			}
		}
	}else if(n == 102){
		for(int i = 0; i < 15; i++){
			char c;
			cin >> c;
			if(c == de2[i]){
				diem += 2.0 / 3;
			}
		}
	}
	cout << fixed << setprecision(2) << diem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
