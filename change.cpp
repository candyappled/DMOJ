// BlueBook - Change
// 1 March 2023
#include <bits/stdc++.h>    
using namespace std;

int n, temp;
int arr[4] = {1, 5, 10, 25};
int cnt[4];

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    temp = n;

    for(int i = 3; i >= 0; i--){
        cnt[i] = n/arr[i];
        n = n % arr[i];
    }

    if(temp == 1){
        cout << temp << " cent requires ";
    } else {
        cout << temp << " cents requires ";
    }

    bool leadComma = false;

    // quarters
    if(cnt[3] == 1){
        cout << cnt[3] << " quarter";
        leadComma = true;
    } else if(cnt[3] > 1){
        cout << cnt[3] << " quarters";
        leadComma = true;
    }

    // dimes
    if(cnt[2] == 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[2] << " dime";
        leadComma = true;
    } else if(cnt[2] > 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[2] << " dimes";
        leadComma = true;
    }

    // nickels
    if(cnt[1] == 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[1] << " nickel";
        leadComma = true;
    } else if(cnt[1] > 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[1] << " nickels";
        leadComma = true;
    }

    // pennies
    if(cnt[0] == 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[0] << " cent";
    } else if(cnt[0] > 1){
        if(leadComma){
            cout << ", ";
        }
        cout << cnt[0] << " cents";
    }

    cout << ".\n";

    return 0;
}