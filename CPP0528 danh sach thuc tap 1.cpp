#include<bits/stdc++.h>

using namespace std;

struct ThucTap{
	int stt;
	string masv, ht, lop, email, dn;
};

bool cmp(ThucTap a, ThucTap b){
	return a.ht < b.ht;
}

int main(){
	int n;
	cin >> n;
	struct ThucTap a[n];
	cin.ignore();
	for(int i = 0; i < n; i++){
		a[i].stt = i + 1;
		getline(cin, a[i].masv);
		getline(cin, a[i].ht);
		getline(cin, a[i].lop);
		getline(cin, a[i].email);
		getline(cin, a[i].dn);
	} 
	sort(a, a + n, cmp);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < n; i++){
			if(a[i].dn == s){
				cout << a[i].stt << " " << a[i].masv << " " << a[i].ht << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << endl;
			}
		}
	}
	return 0;
}
