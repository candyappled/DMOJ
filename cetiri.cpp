#include <bits/stdc++.h>
using namespace std;

int arr[3];

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);

    int d1, d2;
    d1 = arr[1] - arr[0]; d2 = arr[2] - arr[1];

    if(d1 == d2){
        cout << arr[2] + d1 << endl;
    } else if(d1 == 2*d2){
        cout << arr[0] + d2 << endl;
    } else {
        cout << arr[1] + d1 << endl;
    }

    return 0;
}