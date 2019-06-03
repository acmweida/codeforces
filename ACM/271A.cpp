#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int A271() {
	int n,temp;
	int dis[10] = {0,0,0,0,0,0,0,0,0,0};
	cin >> n;
	while (++n) {
		temp = n;
		while (temp > 0) {
			dis[temp % 10]++;
			if (dis[temp % 10] == 2) {
				break;
			}
			temp /= 10;
		}
		if (temp == 0) {
			break;
		}
		memset(dis, 0, 10*sizeof(int));
	}
	cout << n << endl;
	//getchar();
	//getchar();
	return 0;
}
