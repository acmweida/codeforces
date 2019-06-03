#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A580() {
	int n;
	int len=1,maxlen=1;
	int number,prenumber;
	cin >> n;
	n--;
	cin >> prenumber;
	while (n--) {
		cin >> number;
		if (number >= prenumber) {
			len++;
		}
		else {
			len = 1;
		}
		if (len > maxlen) {
			maxlen = len;
		}
		prenumber = number;
	}
	cout << maxlen << endl;
	//getchar();
	//getchar();
	return 0;
}