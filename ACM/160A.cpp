#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool cmp(int &a, int &b) {
	return a > b;
}

int A160() {
	vector<int> coins;
	int n,temp,sum=0;
	cin >> n;
	while (n--){
		cin >> temp;
		sum += temp;
		coins.push_back(temp);
	}
	temp = 0;
	sort(coins.begin(),coins.end(),cmp);
	for (int i = 0; i < coins.size(); i++) {
		//cout << coins[i] << endl;
		temp += coins[i];
		if (temp > sum / 2) {
			cout << i + 1 << endl;
			break;
		}
	}
	
	//getchar();
	//getchar();
	return 0;
}