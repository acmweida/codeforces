#include<iostream>
#include<vector>
using namespace std;

int A158() {
	int n, k,count=0;
	cin >> n >> k;

	vector<int>   arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0 && arr[i] >= arr[k - 1]) {
			count++;
		}
	}
	cout << count << endl;
	//getchar();
	//getchar();
	return 0;
}