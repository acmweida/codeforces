#include<iostream>
#include <string>
using namespace std;
int A133() {
	string str; 
	bool flag = false;
	cin >> str;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') { flag = true; break; }
	}
	if (flag)cout << "YES" << endl;
	else cout << "NO" << endl;
	//getchar();
	//getchar();
	return 0;
}