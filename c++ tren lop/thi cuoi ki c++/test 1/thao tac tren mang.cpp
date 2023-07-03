#include<bits/stdc++.h>

using namespace std;

int main(){
	multiset<int> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp.insert(x);
	}
	int q; cin >> q;
	while(q--){
		int a, b; cin >> a >> b;
		if(a == 1){
			mp.insert(b);
		}else if(a == 2){
			auto it = mp.find(b);
			if(it != mp.end()){
				mp.erase(it);
			}
		}else{
			if(mp.find(b) != mp.end()){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
}
