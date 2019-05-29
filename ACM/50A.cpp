#include<iostream>
using namespace std;

int A50() {
	int n,m,count;
	cin >> n >> m;
	count = n / 2 * m;
	if (n % 2 != 0) {
		count += m / 2;
	}
	cout << count << endl;
	//getchar();
	//getchar();
	return 0;

}