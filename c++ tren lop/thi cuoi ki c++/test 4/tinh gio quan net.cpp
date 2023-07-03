#include<bits/stdc++.h>

using namespace std;
class Game{
	public:
		string tk, mk, ht, in, out;
		int tplay;
		friend istream& operator >> (istream& in, Game &a){
			getline(cin, a.tk);
			getline(cin, a.mk);
			getline(cin, a.ht);
			getline(cin, a.in);
			getline(cin, a.out);
			int h1 = stoi(a.in.substr(0, 2));
			int m1 = stoi(a.in.substr(3, 2));
			int h2 = stoi(a.out.substr(0, 2));
			int m2 = stoi(a.out.substr(3, 2));
			a.tplay = (int)(h2 * 60 + m2 - (h1 * 60 + m1));
			return in;
		}
		friend ostream& operator << (ostream& out, Game a){
			int h = a.tplay / 60; 
			int m = a.tplay % 60;
			cout << a.tk << " " << a.mk << " " << a.ht << " " << h << " gio " << m << " phut" << endl;
			return out;
		}
};

bool cmp(Game a, Game b){
	int t1 = a.tplay, t2 = b.tplay;
	if(t1 != t2){
		return t1 > t2;
	}else{
		return a.tk < b.tk;
	}
}

int main(){
	int n;
	cin >> n;
	Game a[n];
	cin.ignore();
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
}


