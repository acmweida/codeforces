#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
int A734() {
	int n;
	int a;
	string win;
	while (cin >> n >> win) {
		a = 0;
		for (int i = 0; i < win.size(); i++) {
			if (win[i] == 'A') {
				a++;
			}
		}
		if (a > win.size() - a) {
			cout << "Anton" << endl;
		}
		else if (a == win.size() - a){
			cout << "Friendship" << endl;
		}
		else {
			cout << "Danik" << endl;
		}
	} 
	//getchar();
	//getchar();
	return 0;
}