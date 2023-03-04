#include <bits/stdc++.h>
using namespace std;

int n;
int l,a,b,f;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l >> a >> b >> f;
        if(l - f >= a && l - f <= b){
            cout << "Yes" << endl;
        } else cout << "No" << endl;
    }

    return 0;
}