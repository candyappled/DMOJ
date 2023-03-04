#include <bits/stdc++.h>
using namespace std;

int qType, n, ans;
vector<int> d, p;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> qType >> n; 
    d.resize(n);
    p.resize(n);

    for(int i = 0; i < n; i++){
        cin >> d[i];
    }

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(d.begin(), d.end());
    
    if(qType == 1){
        sort(p.begin(), p.end());
    } else if(qType == 2){
        sort(p.begin(), p.end(), greater<int>());
    }
    
    for(int i = 0; i < n; i++){
        ans += max(d[i], p[i]);
    }

    cout << ans << endl;
    return 0;
}