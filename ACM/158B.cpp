#include<iostream>
using namespace std;

int B158() {
	int arr[5] = {0, 0, 0, 0, 0};
	int n;
	int number;
	int cars=0;
	cin >> n;
	while (n--) {
		cin >> number;
		arr[number]++;
	}
	cars += arr[4];
	cars += arr[3];
	if (arr[1] >= arr[3]) {
		arr[1] -= arr[3];
	}
	else {
		arr[1] = 0;
	}
	if (arr[1] > arr[2] * 2) {
		cars += arr[2];
		arr[1] -= arr[2] *2;
		cars += (arr[1] % 4 == 0 ? arr[1] / 4 : arr[1] / 4 + 1);
	}
	else {
		cars += (arr[1] % 2 == 0 ? arr[1] / 2: arr[1] / 2 +1);
		arr[2] -= (arr[1] % 2 == 0 ? arr[1] / 2 : arr[1] / 2 + 1);
		cars+= (arr[2] % 2 == 0 ? arr[2] / 2 : arr[2] / 2 + 1);
	}
	
	cout << cars << endl;
	//getchar();
	//getchar();
	return 0;
}