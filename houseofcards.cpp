#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> w;
int cnt, base;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> k;
    w.resize(n);

    for(int i = 0; i < n; i++){
        cin >> w[i];
    }

    sort(w.begin(), w.end(), greater<int>());

    cnt = 1;
    base = w[0];

    for(int i = 1; i < n; i++){
        // decide if w[i] can be stacked
        if((base - w[i]) >= k){
            cnt++;
            base = w[i];
        } 
    }

    cout << cnt << endl;
    return 0;
}