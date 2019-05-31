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
void swap_this(char *a, char *b) {
	if (a == b) return;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int B266() {
	int n, k;
	string str;
	cin >> n >> k;
	cin >> str;
	for (int j = 0; j < k; j++) {
		for (int i = 0; i < str.size()-1; i++) {
			if (str[i] == 'B'&& str[i + 1] == 'G') {
				swap_this(&str[i], &str[i + 1]);
				i++;
			}
		}
	}
	cout << str << endl;
	getchar();
	getchar();
	return 0;
}