#include <bits/stdc++.h>
using namespace std;

int n, m;
int min1 = 1e9;
int mI, total;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m; 
        total = 0;
        for(int j = 0; j < m; j++){
            cin >> mI;
            total += mI; 
        }
        min1 = min(min1, total);
    }

    cout << min1 << endl;

    return 0;
}