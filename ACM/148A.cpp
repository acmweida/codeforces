#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A148() {
	int k, l, m, n, d;
	int sum = 0;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= d; i++) {
		if (i%k == 0 || i % l == 0 || i % m == 0 || i % n == 0 ) {
			sum++;
		}
	}
	cout << sum << endl;
	//getchar();
	//getchar();
	return 0;
}