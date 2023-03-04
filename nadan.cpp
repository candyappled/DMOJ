#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<int> funding;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> k >> n;
    funding.resize(n);
    
    for(int i = 0; i < n-1; i++){
        funding[i] = i+1;
        k -= (i+1);
    }

    funding[n-1] = k;

    
    for(int i = 0; i < n; i++){
        cout << funding[i] << endl;
    }

    return 0;
}