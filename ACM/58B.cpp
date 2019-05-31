#include<iostream>
#include<string>
using namespace std;

int B58() {
	int k = 0;
	char hello[] = { 'h','e','l','l','o' };
	string   str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == hello[k]) {
			k++;
			if (k == 5){
				break;
			}
		}
	}
	if (k == 5) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	getchar();
	getchar();
	return 0;
}