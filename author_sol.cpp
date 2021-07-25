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
		// by derivation, this is the value of 'c1'
		int c1 = n / 3;
		// assuming 'c2' and 'c1' would amount up to 'n'
		int c2 = c1;
		if (n % 3 == 1) {
			// if the remainder of dividing 'n' by 3 is equal to 1, then add one coin to count of 1
			c1++;
		} else if (n % 3 == 2) {
			// if the remainder of dividing 'n' by 3 is equal to 2, then add one coin to count of 2
			c2++;
		}
		cout << c1 << " " << c2 << '\n';
	}
	return 0;
}
