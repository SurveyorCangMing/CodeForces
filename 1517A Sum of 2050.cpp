#include <bits/stdc++.h>
#define i64 long long
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
using namespace std;
void Main() {
	i64 n; cin >> n;
	if (n % 2050) { cout << -1 << '\n'; }
	else {
		n /= 2050;
		int res = 0;
		while (n) {
			res += n % 10;
			n /= 10;
		}
		cout << res << '\n';
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int test_cnt; cin >> test_cnt;
	rep(test_case, 0, test_cnt) { Main(); }
	return 0;
}