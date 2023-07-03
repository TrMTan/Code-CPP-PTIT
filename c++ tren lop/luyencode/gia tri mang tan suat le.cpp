#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*int sx(int a[], int l, int r){
	int pivor = a[r];
	int i = l - 1;
	for(int j = l; j < r - 1; j++){
		if(a[j] < pivor){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i;
	swap(a[i], a[r]);
	return i;
}

void quicksort(int a[], int l, int r){
	if(l >= r) return;
	int p = sx(a, l, r);
	quicksort(a, l, p - 1);
	quicksort(a, p + 1, r);
}*/


int main()
{   
	long long n;
    cin >> n;

    long long res = 0, x;
    while (n--)
        {
            scanf("%lld", &x);

            res ^= x;
        }
    
    cout << res;

    return 0;
}
