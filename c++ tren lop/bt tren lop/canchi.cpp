#include<bits/stdc++.h>

using namespace std;

int main(){
	string can[10] = {"Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky", "Canh", "Tan", "Nham" };
	string chi[12] = {"Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui", "Than", "Dau", "Tuat" };
	int n; cin >> n;
	cout << can[(n -3) % 10] << " " << chi[(n - 3) % 12];
}
