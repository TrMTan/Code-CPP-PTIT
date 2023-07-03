#include<bits/stdc++.h>

using namespace std;

int n, x;

struct DaTa{
	int id, gt;
};

bool cmp(DaTa a, DaTa b){
	if(abs(a.gt - x) < abs(b.gt - x)) return true;
	if(abs(a.gt - x) == abs(b.gt - x) && a.id < b.id) return true;
	return false;
}

void check(){
	cin >> n >> x;
	DaTa a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].gt;
		a[i].id = i;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i].gt << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
