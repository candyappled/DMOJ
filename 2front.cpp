#include <bits/stdc++.h>
using namespace std;

//vector<int> a(5), b(5);
int a, b;
int minA = 100, minB = 100; 
int sumA, sumB;

int main(void){
    for(int i = 0; i < 5; i++){
        cin >> a;
        sumA += a;
        minA = min(minA, a);
    }

    for(int i = 0; i < 5; i++){
        cin >> b;
        sumB += b;
        minB = min(minB, b);
    }

    cout << max(sumA - minA, sumB - minB) << endl;


    return 0;
}