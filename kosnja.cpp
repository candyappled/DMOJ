#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, cnt;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b; 
        cout << 2*(min(a-1, b-1)) << endl;
    }

    return 0;
}