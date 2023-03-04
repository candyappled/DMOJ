#include <bits/stdc++.h>
using namespace std;

vector<int> prefix;
int temp;
int n, q;
int a, b; 

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    // freopen("marathon.in", "r", stdin);

    cin >> n >> q;
    prefix.resize(n+1);
    for(int i = 1; i <= n; i++){
        cin >> temp;
        prefix[i] = prefix[i-1] + temp;
    }

    for(int i = 1; i <= q; i++){
        cin >> a >> b;
        cout << prefix[n] - (prefix[b] - prefix[a-1]) << endl;
    }

    return 0;
}