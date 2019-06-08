#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A791() {
	int n;
	int a, b;
	while (cin >> a >> b) {
		n = 0;
		while (a <= b) {
			a *= 3;
			b *= 2;
			n++;
		}
		cout << n <<endl;
	}

	getchar();
	getchar();
	return 0;
}