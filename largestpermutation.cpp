#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, dict;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> k;
    a.resize(n);
    dict.resize(n+1);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        dict[a[i]] = i;
    }

    for(int i = 0; i < n && k > 0; i++){
        if(a[i] != n-i){
            // a[i] a[dict[n-i]] 
            swap(a[i], a[dict[n-i]]);
            swap(dict[a[i]], dict[a[dict[n-i]]]);
            k--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}