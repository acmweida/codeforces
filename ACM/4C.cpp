#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#include<cstring>
#include<iostream>
using namespace std;
map<string, int>mp;
string name;
int n;
int C4()
{
	cin >> n;
	map<string, int>::iterator j;
	for (int i = 1; i <= n; i++) {
		cin >> name;
		j = mp.find(name);
		if (j == mp.end()) {
			cout << "OK" << endl;
			mp[name] = 0;
		}
		else {
			mp[name]++;
			cout << name << mp[name] << endl;
		}
	}
	return 0;
}