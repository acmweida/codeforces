#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A318() {
	long long int n, k;
	while (cin >> n >> k) {
		if (n % 2 == 1) {
			n++;
		}
		if (k > n / 2) {
			cout << 2 * (k - (n / 2)) << endl;
		}
		else {
			cout << 2 * k - 1 << endl;
		}
	}
	return 0;
}