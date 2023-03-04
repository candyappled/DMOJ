#include <bits/stdc++.h>
using namespace std;

int n;
string s, maxS;
double rating, maxR;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> rating;
        if(rating > maxR){
            maxS = s;
            maxR = rating;
        }
    }

    cout << maxS << endl;

    return 0;
}