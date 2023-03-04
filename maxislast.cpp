#include <bits/stdc++.h>
using namespace std;

int n;
vector<double> nums;
double maxval = (double) 1e9 * -1;
int maxindex;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    nums.resize(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(nums[i] > maxval){
            maxval = nums[i];
            maxindex = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(i !=  maxindex) printf("%.2f\n", nums[i]);
    }

    // for(int i = 0; i < n; i++){
    //     printf("%.2f\n", nums[i]);
    // }

    // cout << maxval << " " << maxindex << endl;

    printf("%.2f\n", nums[maxindex]);

    return 0;
}
