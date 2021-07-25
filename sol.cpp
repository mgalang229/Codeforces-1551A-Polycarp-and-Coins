#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// view the image in this repository for derivation of formula
		int c1 = n / 3;
		int c2 = (n - c1) / 2;
		// if the sum of 'c1' and 'c2' is still LESS than 'n', then get the difference
		// and add it to 'c1' (it will produce the minimum difference)
		cout << c1 + (n - (c1 + 2 * c2)) << " " << c2 << '\n';
	}
	return 0;
}
