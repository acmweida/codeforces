#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int A617() {
	int n;
	int step = 0;
	cin >> n;
	step = 0;
	step += n / 5;
	n %= 5;
	step += n / 4;
	n %= 4;
	step += n / 3;
	n %= 3;
	step += n / 2;
	n %= 2;
	step += n;
	cout << step << endl;
	
	//getchar();
	//getchar();
	return 0;
}