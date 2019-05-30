#include<iostream>
#include <string>
#include <set>
using namespace std;

int A236() {
	string str;
	set<char> s;
	while (cin >> str) {
		for (int i = 0; i < str.length() ; i++) {
			s.insert(str[i]);
		}
		if (s.size() % 2 == 0) {
			cout << "CHAT WITH HER!" << endl;
		}
		else {
			cout << "IGNORE HIM!" << endl;
		}
		s.clear();
		//cout << s.size();
	}
	
	//getchar();
	//getchar();
	return 0;
}