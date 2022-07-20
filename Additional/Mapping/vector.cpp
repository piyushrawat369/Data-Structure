#include <bits/stdc++.h>
using namespace std;

void solve() {
	string a, b;
	cin >> a >> b;

	int n;
	cin >> n;

	vector<string> names(n);
	for (string &s: names) {
		cin >> s;
	}

	vector<int> freq('z' + 1, 0);
	for (char ch: a) {
		++freq[ch];
	}

	for (char ch: b) {
		++freq[ch];
	}

	for (int i = 0; i < n; ++i) {
		for (char ch: names[i]) {
			if (freq[ch] > 0) {
				--freq[ch];
			} else {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}

int main(int argc, char const *argv[]) {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		solve();
	}
	return 0;
}
