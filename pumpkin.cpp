#include <bits/stdc++.h>
using namespace std;

int n;
int a, b;
int L = 1e6, R = -1e6, T = -1e6, B = 1e6;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        L = min(L, a);
        R = max(R, a);

        T = max(T, b);
        B = min(B, b);
    }

    cout << 2*(R - L) + 2*(T - B) << endl;

    return 0;   
}