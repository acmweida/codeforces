#include<iostream> 
#include<string>
using namespace std;
int A112() {
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	for (int i = 0;i < str1.size();i++) {
		if (str1[i] < 'a') {
			str1[i] += 32;
		}
		if (str2[i] < 'a') {
			str2[i] += 32;
		}
		if (str1[i] < str2[i]) {
			cout << "-1" << endl;
			return 0;
		}
		if (str1[i] > str2[i]) {
			cout << '1' << endl;
			return 0;
		}
	}
	cout << '0' << endl;
	return 0;
}
