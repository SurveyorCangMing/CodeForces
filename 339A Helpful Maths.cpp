#include<iostream>
using namespace std;
char a[101];
int num[4], i, sum, now;
int main() {
	cin >> a;
	while (i <= 100) {
		if (a[i] == '1' || a[i] == '2' || a[i] == '3') {
			num[int(a[i]) - 48]++;
			sum++;
		}
		i++;
	}for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= num[i]; j++) {
			cout << i;
			now++;
			if (now < sum) cout << "+";
		}
	}
	return 0;
}