#include <bits/stdc++.h>
using namespace std;

int n;
int cnt;
vector<int> times;
int total_time;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    times.resize(n);

    int a, b; 
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        times[i] = a*60 + b;
    }

    cin >> a >> b;
    total_time = a*60 +b;

    sort(times.begin(), times.end());

    for(int i = 0; i < n; i++){
        // if song i is playable -> add it 
        if(times[i] <= total_time){
            total_time -= times[i];
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}