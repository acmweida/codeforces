#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A144() {
	int n;
	int number;
	int max, min;
	int maxnumber, minnumber;
	while (cin >> n) {
		max = min = 1;
		for (int i = 1; i <= n; i++) {
			cin >> number;
			if (i == 1) {
				maxnumber = number;
				minnumber = number;
			}
			else {
				if (number > maxnumber) {
					maxnumber = number;
					max = i;
				}
				if (number <= minnumber) {
					minnumber = number;
					min = i;
				}
			}
		}
		//cout << max << " " << min << endl;
		if (max > min) {
			min++;
		}
		cout << (max - 1) + (n - min) << endl;
	}
	//getchar();
	//getchar();
	return 0;
}