#include <bits/stdc++.h>

using namespace std;

/* su dung quay lui
int n, a[100], hv[100];

void sinhhv(int m){
	int i;
	if(m > n){
		for(i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << " ";
		return;
	}
	for(i = 1; i <= n; i++){
		if(hv[i] == 0){
			a[m] = i;
			hv[i] = 1;
			sinhhv(m + 1);
			hv[i] = 0;
		}
	}
}

void check(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		hv[i] = 0;
	}
    sinhhv(1);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	check();
	}
}
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int a[n];
    	for(int i = 0; i < n; i++){
    		a[i] = i + 1;
		}
    	do{
    		for(int i = 0; i < n; i++){
    			cout << a[i];
			}
			cout << " ";
		}while(next_permutation(a, a + n));
		cout << endl;
	}
}
