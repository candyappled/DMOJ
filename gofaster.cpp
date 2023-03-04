#include <bits/stdc++.h>
using namespace std;

int n;
int front_max, front_min, rear_max, rear_min;
int a, b; 

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;

    cin >> a >> b; 
    front_max = a, front_min = a, rear_max = 0, rear_min = 0;

    for(int i = 2; i <= n-1; i++){
        cin >> a >> b;
        // case 1 -> b people came from the front - affects min
        if(front_min >= b){
            front_min -= b;
        } else {
            rear_min -= (b - front_min);
            front_min = 0;
        }
        // case 2 -> b people came from the rear - affects max
        if(rear_max >= b){
            rear_max -= b;
        } else {
            front_max -= (b - rear_max);
            rear_max = 0;
        }
        rear_min += a; rear_max += a;
    }

    cout << front_min << endl << front_max << endl;
    return 0;
}