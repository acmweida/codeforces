#include<iostream>
using namespace std;
int A546() {
	int k, n, w;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		n -= (i*k);
	}
	if (n >= 0) {
		cout << 0 << endl;
	} else {
		cout << 0 - n << endl;
	}

	//getchar();
	//getchar();
	return 0;
}