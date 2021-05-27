#include <bits/stdc++.h>
#define i64 long long
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
using namespace std;
const int N = 1e2;
int nr, nc, a[N][N], b[N][N];
bool vis[N][N];
void Main() {
	cin >> nr >> nc;
	vector<pair<int, int>> o;
	rep(i, 0, nr) {
		rep(j, 0, nc) {
			cin >> a[i][j];
			vis[i][j] = false, b[i][j] = -1;
			o.emplace_back(i, j);
		}
	}
	sort(all(o), [&](const pair<int, int>& p,
		const pair<int, int>& q) {
			return a[p.first][p.second] < a[q.first][q.second];
		});
	rep(i, 0, nc) {
		pair<int, int> p = o[i];
		b[p.first][i] = a[p.first][p.second];
		vis[p.first][p.second] = true;
	}
	rep(i, 0, nr) {
		int k = 0;
		rep(j, 0, nc) {
			if (~b[i][j]) { continue; }
			while (k < nc and vis[i][k]) { ++k; }
			b[i][j] = a[i][k++];
		}
	}
	rep(i, 0, nr) {
		rep(j, 0, nc) {
			cout << b[i][j] << ' ';
		}
		cout << '\n';
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int test_cnt; cin >> test_cnt;
	rep(test_case, 0, test_cnt) { Main(); }
	return 0;
}