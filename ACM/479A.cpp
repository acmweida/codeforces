#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A479() {
	int maxsum=-1;
	int sum;
	int a, b, c;
	while (cin >> a >> b >> c) {
		sum = a + b + c;
		if (sum > maxsum) {
			maxsum = sum;
		}
		sum = a * b * c;
		if (sum > maxsum) {
			maxsum = sum;
		}
		sum = (a + b) * c;
		if (sum > maxsum) {
			maxsum = sum;
		}
		sum = a + (b * c);
		if (sum > maxsum) {
			maxsum = sum;
		}
		sum = a * (b + c);
		if (sum > maxsum) {
			maxsum = sum;
		}
		sum = (a * b) + c;
		if (sum > maxsum) {
			maxsum = sum;
		}
		cout << maxsum << endl;
		maxsum = -1;
	}
	//getchar();
	//getchar();
	return 0;
}