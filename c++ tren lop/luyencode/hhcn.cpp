#include<iostream>
#include<math.h>

using namespace std;

int main(){
	unsigned long long s1, s2, s3, t;
	cin >> s1 >> s2 >> s3;
	t = round(sqrt(s1 * s2 * s3));
	t = t/s1 + t/s2 + t/s3;
	cout << 4*t;
}

