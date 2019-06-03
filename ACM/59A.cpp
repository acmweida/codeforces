#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A59() {
	string word;
	int uperlen = 0;
	int len;
	while (cin >> word) {
		len = word.size();
		uperlen = 0;
		for (int i = 0; i < len; i++) {
			if (word[i] <= 'Z') {
				uperlen++;
			}
		}
		if (uperlen > len - uperlen) {
			for (int i = 0; i < len; i++) {
				if (word[i] >= 'a') {
					word[i] -= 32;
				}
			}
		}
		else {
			for (int i = 0; i < len; i++) {
				if (word[i] <= 'Z') {
					word[i] += 32;
				}
			}
		}
		cout << word << endl;
	}
	getchar();
	getchar();
	return 0;
}