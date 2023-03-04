#include <bits/stdc++.h>
using namespace std;

char a, b, c;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> a >> b >> c;
    
    switch(a){
        case 'U': 
            switch(c){
                case 'U': 
                    cout << "Neither\n";
                    break;
                case 'D': 
                    if(b != 'U' && b != 'D'){
                        cout << "Candle\n";
                    } else {
                        cout << "Neither\n";
                    }
                    break;
                case 'L': 
                    cout << "Neither\n";
                    break;
                case 'R': 
                    cout << "Neither\n";
                    break;
            }
            break;
        case 'D': 
            switch(c){
                case 'U': 
                    if(b != 'D' && b != 'U'){
                        cout << "Candle\n";
                    } else {
                        cout << "Neither\n";
                    }
                    break;
                case 'D': 
                    cout << "Neither\n";
                    break;
                case 'L': 
                    cout << "Neither\n";
                    break;
                case 'R': 
                    cout << "Neither\n";
                    break;
            }
            break;
        case 'L':   
            switch(c){
                case 'U': 
                    cout << "Neither\n";
                    break;
                case 'D': 
                    cout << "Neither\n";
                    break;
                case 'L': 
                    cout << "Neither\n";
                    break;
                case 'R': 
                    if(b != 'L' && b != 'R'){
                        cout << "Crossover\n";
                    } else {
                        cout << "Neither" << endl;
                    }
                    break;
            }
            break;
        case 'R': 
            switch(c){
                case 'U': 
                    cout << "Neither\n";
                    break;
                case 'D': 
                    cout << "Neither\n";
                    break;
                case 'L': 
                    if(b != 'R' && b != 'L'){
                        cout << "Crossover\n";
                    } else {
                        cout << "Neither\n";
                    }
                    break;
                case 'R': 
                    cout << "Neither\n";
                    break;
            }
            break;
    }
    return 0;
}