#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> a >> b >> c;
    if(a+b == c) cout << a << "+" << b << "=" << c << endl;
    else if(a-b == c) cout << a << "-" << b << "=" << c << endl;
    else if(a*b == c) cout << a << "*" << b << "=" << c << endl;
    else if(a/b == c) cout << a << "/" << b << "=" << c << endl;
    
    else if(b+c == a) cout << a << "=" << b << "+" << c << endl;
    else if(b-c == a) cout << a << "=" << b << "-" << c << endl;
    else if(b*c == a) cout << a << "=" << b << "*" << c << endl;
    else cout << a << "=" << b << "/" << c << endl;

    return 0;
}