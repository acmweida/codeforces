#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A467() {
	int n;
	int x, y;
	int count=0;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (y - x >= 2) {
			count++;
		}
	}
	cout << count << endl;
	getchar();
	getchar();
	return 0;
}