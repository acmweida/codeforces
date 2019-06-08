#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;


int main() {

	int m, n;
	int boy[102];
	int girl[102];
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> boy[i];
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> girl[i];
		}
		sort(boy, boy+n);
		sort(girl, girl + m);
		//cout << boy[0] <<" " << boy[1];
		int ans = 0;
		int j = 0;
		for (int i = 0; i < n; i++) {
			//cout << i;
			if (abs(boy[i] - girl[j]) <= 1) {
				ans++;
				j++;
			}
			else if (boy[i] > girl[j]){
				i--;
				j++;
			}
			if (j == m) {
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
