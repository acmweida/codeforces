#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A61() {
	string number1;
	string number2;
	while (cin >> number1 >> number2) {
		for (int i = 0; i < number1.size(); i++) {
			if (number1[i] == number2[i]) {
				cout << 0;
			}
			else {
				cout << 1;
			}
		}
		cout << endl;
	}
	return 0;
}