#include <bits/stdc++.h>
using namespace std;

long long n, t, cnt;
long long c, d;

int main(void){
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> c >> d;
        if(c*(100-d) <= t*100) cnt++;
    }

    cout << cnt << endl;
    return 0;
}