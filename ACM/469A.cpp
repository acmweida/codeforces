#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;
int A469() {
	int n;
	int l;
	int temp;
	int b[102];
	int flag;
	while (cin >> n) {
		memset(b,0,sizeof(b));
		flag = true;
		cin >> l;
		while (l--) {
			cin >> temp;
			b[temp]++;
		}
		cin >> l;
		while (l--) {
			cin >> temp;
			b[temp]++;
		}
		for (int i = 1; i <= n; i++) {
			if (b[i] == 0) {
				flag = false;
			}
		}
		if (flag) {
			cout << "I become the guy." << endl;
		}
		else {
			cout << "Oh, my keyboard!" << endl;
		}
		
	}
	//getchar();
//	getchar();
	return 0;
}