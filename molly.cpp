#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
int ans = 1e9;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    a.resize(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++){
        ans = min(ans, abs(a[i] - a[i-1]));
    }

    cout << ans << endl;
    return 0;
}