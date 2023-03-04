#include <bits/stdc++.h>
using namespace std;

int n, d, q, l, t;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> d >> q >> l >> t;
    cout << n*5 + d*10 + q*25 + l*100 + t*200 << endl;

    return 0;
}