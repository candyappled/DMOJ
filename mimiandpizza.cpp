#include <bits/stdc++.h>
using namespace std;

int b, p;
char y;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> b >> p >> y;
    if(y == 'Y'){
        if(5*p <= b){
            cout << "B" << endl;
        } else if(2*p <= b){
            cout << "D" << endl;
        } else {
            cout << "NO PIZZA" << endl;
        }
    } else {
        if(5*p <= b){
            cout << "A" << endl;
        } else if(2*p <= b){
            cout << "C" << endl;
        } else {
            cout << "NO PIZZA" << endl;
        }
    }
    return 0;
}