#include <bits/stdc++.h>
using namespace std;

int N, cost;
int a, b;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;

    while(N != 1){
        // find first factors of N
        for(int i = 2; i <= N; i++){
            if(N % i == 0){
                a = N/i, b = i-1;
                cost += b;
                N = a*b;
                break;
            } 
        }
    }

    cout << cost << endl;

    return 0;
}