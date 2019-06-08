#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;

int C489() {
	int m, s;
	stringstream maxnumber;
	string min;
	stringstream ss;
	while (cin >> m >> s) {
		maxnumber.str("");
		if (m == 1 && s == 0)
			cout << "0 0" << endl;
		 else if (s == 0 || 9 * m < s)
			cout << "-1 -1" << endl;
		else {
			for (int i = 0; i < m; i++) {
				if (s > 9) {
					maxnumber << '9';
					s -= 9;
				}
				else {
					maxnumber << s;
					s = 0;
				}
			}
			min = maxnumber.str();
			//cout << ss.str() << endl;
			ss.str("");
			reverse(min.begin(), min.end());
			if (min[0] == '0'){
				int i;
				for (i = 1; i < min.size();i++) {
					if (min[i] != '0')
						break;
				}
				min[0]++;
				min[i]--;
			}
			cout << min << " " << maxnumber.str() << endl;
		}
	}
	
	return 0;
}