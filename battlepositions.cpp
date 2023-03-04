#include <bits/stdc++.h>
using namespace std;

int I, N, J, K, cnt;
int Xi, Xf; 
vector<int> stations;
vector<int> a;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("battlepositions.in", "r", stdin);

    cin >> I >> N >> J;
    stations.resize(I+1); 
    a.resize(I+2);
    for(int i = 1; i <= J; i++){
        cin >> Xi >> Xf >> K;
        a[Xi] += K, a[Xf + 1] -= K;
    }

    // calculate prefix sum of a
    for(int i = 1; i <= J; i++){
        stations[i] = stations[i-1] + a[i];
    }
    
    for(int i = 1; i <= I; i++){
        if(stations[i] < N) cnt++;
    }

    cout << cnt << endl;
    return 0;
}