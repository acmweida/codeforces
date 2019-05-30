#include<iostream>
using namespace std;

int A263() {
	int  count = 0;
	int arr[5];
	for (int i = 1; i <= 5;i++) {
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
		if (arr[0] == 1 || arr[1] == 1 || arr[2] == 1 || arr[3] == 1 || arr[4] == 1) {
			if (arr[0] == 1 || arr[4]==1) {
				count += 2;
			}
			else if (arr[1] == 1 || arr[3] == 1 ) {
				count += 1;
			}
			count +=abs(i - 3);
		}
	}
	cout << count << endl;
	//getchar();
	//getchar();
	return 0;
}