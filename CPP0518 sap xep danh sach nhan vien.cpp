#include<bits/stdc++.h>

using namespace std;

int stt = 1;

struct NhanVien{
	string manv;
	string ht, gt, ns, dc, mst, hd;
};

string STT(int i){
	string r = to_string(i);
	if(i < 10) r = "0000" + r;
	else r = "000" + r;
	return r;
}

bool cmp(NhanVien a, NhanVien b){
	string s = a.ns, t = b.ns;
	int t1 = (s[0] - '0') * 10 + (s[1] - '0'), ng1 = (s[3] - '0') * 10 + (s[4] - '0'), na1 = stoi(s.substr(6));
	int t2 = (t[0] - '0') * 10 + (t[1] - '0'), ng2 = (t[3] - '0') * 10 + (t[4] - '0'), na2 = stoi(t.substr(6));
	if(na1 != na2) return na1 < na2;
	if(t1 != t2) return t1 < t2;
	return ng1 < ng2;
}

void nhap(NhanVien &a){
	a.manv = STT(stt); stt++;
	cin.ignore();
	getline(cin, a.ht);
	cin >> a.gt;
	cin >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst;
	cin >> a.hd;
}

void sapxep(NhanVien a[], int n){
	sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].manv << " " << a[i].ht << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
