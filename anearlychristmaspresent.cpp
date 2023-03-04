#include <bits/stdc++.h>
using namespace std;

int n, a;
int min1 = 1e9;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        min1 = min(min1, a);
    }

    cout << min1 << endl;

    return 0;
}