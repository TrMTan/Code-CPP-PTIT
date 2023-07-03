#include<bits/stdc++.h>

using namespace std;

struct Tuoi{
    string ht, ns;
};

bool cmp(Tuoi a, Tuoi b){
    string s1 = a.ns, s2 = b.ns;
    int ng1 = (s1[0] - '0') * 10 +(s1[1] - '0'), t1 = (s1[3] - '0') * 10 + (s1[4] - '0'), na1 = stoi(s1.substr(6));
    int ng2 = (s2[0] - '0') * 10 +(s2[1] - '0'), t2 = (s2[3] - '0') * 10 + (s2[4] - '0'), na2 = stoi(s2.substr(6));
    if(na1 != na2) return na1 > na2;
    if(t1 != t2) return t1 > t2;
    return ng1 > ng2;
}

int main(){
    int n;
    cin >> n;
    Tuoi a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].ht >> a[i].ns;
    }
    sort(a, a + n, cmp);
    cout << a[0].ht << endl << a[n - 1].ht;
}