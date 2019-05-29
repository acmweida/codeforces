#include<iostream>
#include<string>
using namespace std;
char TO_UPPER(char  c) {
	if (c >= 'a') {
		c -= 32;
	}
	return c;
}

int A281() {
	string word;
	while (cin >> word) {
	word[0] = TO_UPPER(word[0]);
	cout << word << endl;
	}
	//getchar();
	//getchar();
	return 0;
}