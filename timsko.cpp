#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int cnt;

int main(void){
    cin >> m >> n >> k;
    while(m+n >= k+3 && m >= 2 && n >= 1){
        cnt++;
        m -= 2, n--;
    }

    cout << cnt << endl;

    return 0;
}