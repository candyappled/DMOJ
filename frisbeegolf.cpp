#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> coins = {1, 5, 10, 50, 100, 500, 1000};
vector<ll> cnt (7);
ll d;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> d; 
    for(int i = 6; i >= 0; i--){
        // while(d >= coins[i]){
        //     cnt[i]++;
        //     d -= coins[i];
        // }
        if(d >= coins[i]){
            cnt[i] += d/coins[i];
            d = d%coins[i];
        }

    }

    for(int i = 0; i < 6; i++){
        cout << cnt[i] << " ";
    }
    cout << cnt[6] << endl;

    return 0;
}