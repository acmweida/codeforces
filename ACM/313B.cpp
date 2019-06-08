#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;
int dp[100002];
void sub(string word) {
	for (int i = 1; i < word.size(); i++){
		dp[i] = dp[i - 1];
		if (word[i - 1] == word[i])
			dp[i]++;
	}
}
int A313() {
	int n;
	int x, y;
	string word;
	while (cin >> word) {
		sub(word);
		cin >> n;
		while (n--&&cin >> x >> y) {
			
			cout << dp[y-1] - dp [x-1]<< endl;
		}
		memset(dp, 0, sizeof(dp));
	}
	return 0;
}