#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt2 = 0, cnt3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++cnt2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++cnt3;
		}
		if (n == 1 && cnt2 <= cnt3) {
			cout << 2 * cnt3 - cnt2 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	
	return 0;
}
/*
If the number consists of other primes than 2 and 3 then the answer is -1. Otherwise, let cnt2 be the number of twos in the factorization of n and cnt3 be the number of threes in the factorization of n. If cnt2>cnt3 then the answer is -1 because we can't get rid of all twos. Otherwise, the answer is (cnt3−cnt2)+cnt3

.

Time complexity: O(logn)
.
*/
