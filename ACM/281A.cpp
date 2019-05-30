#include<iostream>
#include<string>
#include "util.h"
using namespace std;


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