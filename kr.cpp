#include <bits/stdc++.h>
using namespace std;

int a, sum;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> a;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) sum += i;
    }

    cout << sum << endl;
    
    return 0;
}