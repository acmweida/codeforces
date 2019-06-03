#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}

int A337() {
	int n, m;
	int p[52];
	int min = 1000;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	sort(p, p+m, cmp);
	//cout << p[0] << " " << p[1];
	for (int i = 0; i <= m - n; i++) {
		if (p[i] - p[i + n-1] < min || min == 1000) {
			min = p[i] - p[i + n-1];
		}
	}
	cout << min << endl;
	//getchar();
	//getchar();
	return 0;
}