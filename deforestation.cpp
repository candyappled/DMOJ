#include <bits/stdc++.h>
using namespace std;

int n, q;
// vector<int> tree;
vector<int> prefix;

int main(void) { 
	ios::sync_with_stdio(0); cin.tie(0);
    // freopen("deforestation.in", "r", stdin);

	cin >> n;
	// tree.resize(n+1);
	int temp;
    prefix.resize(n+1);
	for(int i = 1; i <= n; i++){
		cin >> temp;
        prefix[i] = prefix[i-1] + temp;
	}

	cin >> q;
	for(int i = 0; i < q; i++){
		int a, b; cin >> a >> b;
        cout << prefix[b+1] - prefix[a] << endl; 
	}

	return 0; 
}