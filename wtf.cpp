// DMOJ - World Trade Foundation
#include <bits/stdc++.h>
using namespace std;

vector<int> coin;
int n, k;
int cnt;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    freopen("wtf.in", "r", stdin);

    cin >> n >> k; 
    coin.resize(n);
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    for(int i = n-1; i >= 0; i--){
        while(k >= coin[i]){
            cnt++;
            k -= coin[i];
        }
    }

    if(k > 0){
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }
    return 0;
}