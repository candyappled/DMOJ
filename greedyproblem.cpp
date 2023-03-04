#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, cnt;
vector<pair<ll, ll>> a;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    a.resize(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        if(a[i].second <= m){
            cnt += a[i].first * a[i].second; 
            m -= a[i].second;
        } else {
            cnt += a[i].first * m;
            m = 0;
        }
    }

    cout << cnt << endl;
    
    return 0;
}