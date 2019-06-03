#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A677() {
	int n, h;
	int w;
	int eh;
	while (cin >> n >> h) {
		w = n;
		while (n--) {
			cin >> eh;
			if (eh > h) {
				w += 1;
			}
		}
		cout << w << endl;
	}

	//getchar();
	//getchar();
	return 0;
}