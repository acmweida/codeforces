#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include <sstream>
using namespace std;
long long int c[100002];
long long int d[100002];
void init() {
	memset(c, 0, sizeof(c));
	memset(d, 0, sizeof(d));
}

int A455() {
	int n;
	long long int maxx;
	long long int temp;
	while (cin >> n) {
		init();
		maxx = 0;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			if (maxx < temp) {
				maxx = temp;
			}
			c[temp]++;
		}
		d[0] = 0;
		d[1] = c[1];
		for (int i = 2; i <= maxx; i++) {
			d[i] = max(d[i - 1], d[i - 2] + c[i] * i);  //
		}
		cout << d[maxx] << endl;
	}
	return 0;
}