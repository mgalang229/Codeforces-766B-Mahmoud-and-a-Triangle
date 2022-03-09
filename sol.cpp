#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// simply check for a non-degenerate triangle (sequence must be in non-decreasing order)
	sort(a.begin(), a.end());
	bool checker = false;
	for(int i = 0; i + 2 < n; i++) {
		checker |= (a[i] + a[i+1] > a[i+2]);
	}
	cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

