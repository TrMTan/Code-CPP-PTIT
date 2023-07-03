#include<bits/stdc++.h>

using namespace std;
int i = 1, j = 1;
class KhachHang{
	private:
		string mhk, tkh, gt, ns, dc;
	public:
		friend HoaDon;
};	

class MatHang{
	private:
		string mmh, tmh, dvt;
		int mua, ban;
	public:
		friend HoaDon;
};

class HoaDon{
	private:
		string mhd,
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
