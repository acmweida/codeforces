#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
#include<string.h>
#define min3(a,b,c)   a < b ? a < c ? a : c : b > c ? c : b 
#define min(a,b) a < b ? a:b;
using namespace std;
int a[102];
int dp[102][3];
int main() {
	int n;
	while(cin >>n) {
		for (int i=1;i<=n; i++)
			cin >> a[i];
		memset(dp, 0,sizeof(dp));
		memset(dp[0], 0, sizeof(dp));
		for (int i = 1; i <= n; i++) {
			dp[i][0] = min3(dp[i-1][0], dp[i - 1][1], dp[i - 1][2]) + 1;       //���������Ϣ��ǰ��������κ���
				if (a[i] == 1 || a[i] == 3) {
					dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);                   //�������1��ǰһ��ֻ����Ϣ���߻2
				}
				if (a[i] == 2 || a[i] == 3) {
					dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);           //�������2��ǰһ��ֻ����Ϣ���߻1
				}
			}
		int count = min3(dp[n][0], dp[n][1], dp[n][2]);
			cout << count << endl;
		}

	return 0;
}