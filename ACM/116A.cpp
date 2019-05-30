#include<iostream>
using namespace std;

int A116() {
	int n;
	int i, o;
	int number = 0;
	int min = 0;
	cin >> n;
	while (n-- ) {
		cin >> i >> o;
		number -= i;
		number += o;
		if (number > min) {
			min = number;
		}
		
	}
	cout << min << endl;
	//getchar();
	//getchar();
	return 0;
}