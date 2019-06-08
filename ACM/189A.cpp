#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;
int s[4005];


int A189() {
	int n, a, b, c;
	int max;
	int temp;
	while (cin >> n >> a >> b >> c) {
		memset(s, -999999, sizeof(s));
		s[0] = 0;
		for (int i = 0; i <= n; i++) {
			max = s[i];
			if (i >= a) {
				max = s[i] > s[i - a] + 1 ? s[i] : s[i - a] + 1;
			}
			if (i >= b) {
				temp = s[i] > s[i - b] + 1 ? s[i] : s[i - b] + 1;
				if (max < temp) {
					max = temp;
				}
			}
			if (i >= c) {
				temp = s[i] > s[i - c] + 1 ? s[i] : s[i - c] + 1;
				if (max < temp) {
					max = temp;
				}
			}
			s[i] = max;
			//cout << s[i] << endl;
		}
		cout << s[n] << endl;
	}



	getchar();
	getchar();
	return 0;
}