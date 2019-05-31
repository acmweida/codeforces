#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A110() {
	string str;
	int lu ;
	while (cin >> str) {
		lu = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '4' || str[i] == '7') {
				lu++;
			}
		}
		if (lu == 4 || lu == 7) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	getchar();
	getchar();
	return 0;
}
