#include <bits/stdc++.h>

using namespace std;

int a, b, ans;
int n0;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> a >> b;
    if(b < 0){ // if the right end of the range is negative -> no perfect squares 
        cout << 0 << endl;
        return 0;
    }
    
    if(a < 0 && b >= 0){
        n0 = 0; // set left end of range to 0
    } else if(a > 0){
        n0 = ceil(sqrt(a)); // set to sqrt of a, rounded up
    }

    while(n0*n0 <= b){
        ans++; 
        n0++;
    }
    
    cout << ans << endl;
    return 0;
}