
#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e3;
int a[mxN], n, m;

void test_case() {
	cin >> n >> m;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < n; ++i) {
		sum += a[i];
	}
	cout << min(sum, m) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
