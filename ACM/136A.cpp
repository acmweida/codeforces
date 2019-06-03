#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
/*
  Name: print
  Description: Êä³öÊý×é
  Date: 02-01-19
  Copyright:
*/
void printInt_this(int *arr, int lenth) {
	for (int i = 1; i < lenth; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int A136() {
	int n;
	int a[102], b[102];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i == a[i]) b[i] = a[i];
		else {
			b[a[i]] = i;
		}
	}
	printInt_this(b, n + 1);
	//getchar();
	//getchar();
	return 0;
}