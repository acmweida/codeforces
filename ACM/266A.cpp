#include<iostream>
#include <string>
using namespace std;

int A266() {
	int len,count = 0;
	string str;
	cin >> len;
	cin >> str;
	for (int i = 0; i < len-1; i++) {
		if (str[i] == str[i + 1]) {
			count++;
		}
	}
	cout << count << endl;
	//getchar();
	//getchar();
	return 0;
}