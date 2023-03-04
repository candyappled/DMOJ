// Global Warming
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, v;
	while (true) {
		vector<int> arr;
		vector<int> diff; // arr: n,  diff: n-1
		cin >> n;

		if (n == 0)
			break;

		if (n == 1) {
			cin >> v;
			cout << 0 << endl;
		} else {
			for (int i = 0; i < n; i++) {
				cin >> v;
				arr.push_back(v);
			}

			for (int i = 0; i < n - 1; i++) {
				diff.push_back(arr[i + 1] - arr[i]);
			}

			// diff = 1 2 -2 1 2 -2
			// k = 1 ?      k = 2 ?     k = 3 ?
			// i   i%1      i   i%2     i   i%3
			// 1   0        2   0       3   0
			// 2   0        3   1       4   1
			// 3   0        4   0       5   2
			// 4   0        5   1
			// 5   0

			for (int k = 1; k <= n - 1; ++k) {
				// k is length of cycle ?
				bool works = true;
				for (int i = k; i < n - 1; ++i) {
					if (diff[i] != diff[i % k]) {
						works = false;
						break;
					}
				}

				// if work=true, then k is the length of the cycle
				if (works) {
					cout << k << endl;
					break;
				}
			}
		}
	}
	
	return 0;
}