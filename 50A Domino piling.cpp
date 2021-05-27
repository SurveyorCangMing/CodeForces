#include<iostream>
using namespace std;
int main() {
	int n, m, sum, a;
	cin >> n >> m;
	a = n / 2;
	sum = a * m;
	if (n % 2 == 1) sum += m / 2;
	cout << sum;
	return 0;
}