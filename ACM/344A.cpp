#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A344() {
	int n;
	int len;
	int m, perm;
	while (cin >> n) {
		len = 1;
		n--;
		cin >> perm;
		while (n--) {
			cin >> m;
			if (perm != m) {
				len++;
			}
			perm = m;
		}
		cout << len << endl;
	}
	//	getchar();
	//getchar();
	return 0;
}