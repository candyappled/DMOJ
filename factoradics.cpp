#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll d[1000];
ll dest_i, n, source_i;
string s;

ll last, last2;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    for(int i = 1; i <= 10; i++){
        cin >> s;
        for(int j = 0; j < 1000; j++){
            d[j] = 0;
        }
        
        dest_i = 0; 
        source_i = (int)s.size() -1;

        // process n
        while(source_i > 1){
            last = s[source_i] - '0';
            last2 = (s[source_i - 1] - '0')*10 + last;

            dest_i = max(dest_i, last);
            if(last2 <= dest_i){
                d[dest_i] = last2;
                source_i -= 2;
            } else {
                d[dest_i] = last;
                source_i--;
            }
            dest_i++;
        }

        // process last 2 digits
        if(source_i == 1){
            last  = s[1] - '0';
            last2 = (s[0] - '0')*10 + last;
            dest_i = max(dest_i, last);
            if(last2 <= dest_i){
                d[dest_i] = last2;
                dest_i++;
            } else {
                d[dest_i] = last;
                dest_i++;
                last = s[0] - '0';
                dest_i = max(dest_i, last);
                d[dest_i] = last;
                dest_i++;
            }
        } else if(source_i == 0){
            // d[dest_i] = last;
            last = s[0] - '0';
            dest_i = max(dest_i, last);
            d[dest_i] = last;
            dest_i++;
        }

        for(int z = dest_i-1; z >= 0; z--){
            cout << d[z] << " ";
        }
        cout << endl;
    }

    return 0;
}