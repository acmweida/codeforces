#include<iostream>
#include <string>
using namespace std;

/*
Name:  TO_LOWER
	Description :  变小写:
	Date : 29 - 05 - 19
*/
char TO_LOWER_THIS(char  c) {
	if (c < 'a') {
		c += 32;
	}
	return c;
}

/*
Name:  TO_UPPER
	Description :  变大写:
	Date : 29 - 05 - 19
*/
char TO_UPPER_THIS(char  c) {
	if (c >= 'a') {
		c -= 32;
	}
	return c;
}
int A131() {
	string str;
	int upper;
	while (cin >> str) {
		upper = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] <= 'Z') {
				upper++;
			}
		}
		if (upper == str.size() || (str[0] >= 'a' && upper == str.size() - 1)||str.size()==1) {
			if (str[0]<='Z') {
				str[0] = TO_LOWER_THIS(str[0]);
			}
			else {
				str[0] = TO_UPPER_THIS(str[0]);
			}
			for (int i = 1; i < str.size(); i++) {
				str[i] = TO_LOWER_THIS(str[i]);
			}
		}
		cout << str << endl;
	}
	

	getchar();
	getchar();
	return 0;
}
