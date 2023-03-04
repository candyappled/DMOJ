#include <bits/stdc++.h>
using namespace std;

int v;
double g = -9.8;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> v;
    cout << fixed << setprecision(6) << (-2.0*v)/g << endl;

    return 0;
}