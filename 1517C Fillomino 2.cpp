#include <bits/stdc++.h>
#define i64 long long
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
using namespace std;
const int N = 500;
int n, perm[N], a[N][N];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n;
	rep(i, 0, n) { rep(j, 0, n) { a[i][j] = -1; } }
	rep(i, 0, n) {
		cin >> perm[i];
		int x = i, y = i;
		rep(z, 0, perm[i]) {
			assert(0 <= x and x < n); //
			assert(0 <= y and y < n); //
			a[x][y] = perm[i];
			if (y and a[x][y - 1] == -1) { --y; }
			else { ++x; }
		}
	}
	rep(i, 0, n) {
		rep(j, 0, i + 1) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}