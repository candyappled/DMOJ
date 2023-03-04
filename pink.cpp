#include <bits/stdc++.h>
using namespace std;

int n, r, g, b, cnt;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> r >> g >> b;
        if(r >= 240 && r <= 255 && 
           g >= 0 && g <= 200 && 
           b >= 95 && b <= 220) cnt++;
    }

    cout << cnt << endl;
    return 0;
}