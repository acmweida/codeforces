#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A451() {

	int n, m, a;
	while (cin >> n >> m){
		if (n < m)
			a = n;
		else
			a = m;
		if (a % 2 == 1)
			printf("Akshat\n");
		else
			printf("Malvika\n");
	}
	
	return 0;
}