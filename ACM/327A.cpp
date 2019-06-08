#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;
/*int dp[102][102];
/*
int sub(int* num, int i, int j,bool both) {
	int max_right,max_left,max_both=-1;
	max_right = max_left = -1;
	if (i > j) return 0;
	if (i == j ) {
		return dp[i][j];
	}
	if (dp[i][j]) {
		return dp[i][j];
	}
	else {
		
		if ( !both) max_right = abs(num[i] - 1) +  sub(num, i + 1, j,false);
		if (!both)  max_left = abs(num[j] - 1)+sub(num, i, j - 1,false );
		if (both)  max_both = sub(num, i + 1, j - 1, );
		int max = max_both > max_right ? max_both > max_left ? max_both : max_left : max_right > max_left ? max_right : max_left;
		dp[i][j] = max;
		return max;
	}
}*/

int A327() {
	int n;
	int num[102];
	int count;
	while (cin >> n) {
		count=0;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
			count += num[i];
		
		}
		if (count == n){
			cout << count - 1 << endl;
			continue;
		}
		int p = 0;
		int max = 0;
		for (int i = 0; i < n; i++) {
			if (num[i] == 0) {
				p++;
			} else if (num[i] == 1 && p < 0)
				p = 0;
			else if (num[i] == 1 && p > 0)
				p--;
			if (max < p)
				max = p;
		}
		cout << max + count << endl;
		memset(num, 0, sizeof(num));
	}
	return 0;
}