#include<iostream>
#include<string>
using namespace std;

int A96() {
	string n;
	int count = 1;
	cin >> n;
	char per = n[0];
	for (int i = 1;i < n.size();i++) {
		if (n[i]==per) {
			count++;
		}
		else {
			count = 1;
		}
		if (count == 7) {
			cout << "YES" << endl;
			return 0;
		}
		per = n[i];
	}
	cout << "NO" << endl;
	getchar();
	getchar();
	return 0;

}