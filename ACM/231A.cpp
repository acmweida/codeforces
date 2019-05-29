#include<iostream>
#include<vector>
using namespace std;

int A231() {
	int n, count = 0;
	cin >> n ;

	vector<int>   arr(3);
	while (n--) {
		cin >> arr[0] >> arr[1] >> arr[2];
		if (2 <= arr[0] + arr[1] + arr[2]) {
			count++;
		}
	}
	cout << count << endl;
	//getchar();
	//getchar();
	return 0;
}