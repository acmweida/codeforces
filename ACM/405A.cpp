#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;

bool cmp_A405(int &a, int &b) {
	return a < b;
}

int A405() {
	vector<int> coins;
	int n, temp;
	cin >> n;
	while (n--) {
		cin >> temp;
		coins.push_back(temp);
	}
	temp = 0;
	sort(coins.begin(), coins.end(), cmp_A405);
	for (int i = 0; i < coins.size(); i++) {
		cout << coins[i] << " " ;
	}
	cout << endl;

	//getchar();
	//getchar();
	return 0;
}
