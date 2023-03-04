#include <bits/stdc++.h>
using namespace std;

int N, M, H;
int m, ans;

vector<int> T;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M >> H;
    
    T.resize(N);
    for(int i = 0; i < N; i++){
        cin >> T[i];
    }

    for(int i = N-1; i > 0; i--){ // starting from the back is simpler
        if(T[i] - T[i-1] > H){
            // T[i-1] should slow down by m*M units
            m = ceil( (double)(T[i] - T[i-1] - H)/(double)M ); 
            ans += m;
            T[i-1] += m*M;
        }
    }

    cout << ans << endl;

    return 0;
}