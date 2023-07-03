#include<bits/stdc++.h>

using namespace std;

struct Tuoi{
	string name, ns;
};

bool cmp(Tuoi a, Tuoi b){
	string s = a.ns, t = b.ns;
	int ng1 = (s[0] - '0') * 10 + (s[1] - '0'), t1 = (s[3] - '0') * 10 + (s[4] - '0'), na1 = stoi(s.substr(6));
	int ng2 = (t[0] - '0') * 10 + (t[1] - '0'), t2 = (t[3] - '0') * 10 + (t[4] - '0'), na2 = stoi(t.substr(6));
	if(na1 != na2) return na1 > na2;
	if(t1 != t2) return t1 > t2;
	return ng1 > ng2;
}

int main(){
	int n;
	cin >> n;
	Tuoi a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].name;
		cin >> a[i].ns;
	}
	sort(a, a + n, cmp);
	cout << a[0].name << endl << a[n - 1].name;
}
