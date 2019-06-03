#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	long long int n;
	long long int  sum;
	while (cin >> n) {
		sum = 0;
		if (n % 2 != 0) {
			sum -= n;
		}
		sum += n / 2;
		cout << sum << endl;
	}
	getchar();
	getchar();
	return 0;
}