#include<iostream>
#include<string>
using namespace std;

int A122() {
	int number;
	int lu[14] = { 4,7,44,77,47,74,444,777,477,747,774,744,474,447 };
	int n[1002] ;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == lu[j] || i % lu[j] == 0) {
				n[i] = 1;
				break;
			}
		}
	}
	while (cin >> number) {
		if (n[number] == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	//getchar();
	//getchar();
	return 0;
}