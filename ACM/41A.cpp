#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
Name: swap
	Description : 交换两个数
	Date : 12 - 01 - 19
	Copyright :
		int a = 10, b = 2;
		swap(&a, &b);
		printf("%d %d", a, b);
		getchar();
*/
void swap(char *a, char *b) {
	if (a == b) return;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int A41() {
	string word;
	string reword;
	cin >> word;
	cin >> reword;
	for (int i = 0; i < word.size() / 2; i++) {
		swap(word[i], word[word.size() - 1 - i]);
	}
	if (reword.compare(word) == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	//getchar();
	//getchar();
	return 0;
}
