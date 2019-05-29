#include<iostream>
#include<stdio.h>
#include<string>
#include <sstream>

using namespace std;

int A118()
{
	string str;
	stringstream result;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i' && str[i] != 'A' && str[i] != 'O' && str[i] != 'Y' && str[i] != 'E' && str[i] != 'U' && str[i] != 'I')  {
			if (str[i] <= 'Z') {
				str[i] += 32;
			}
			result << '.' << str[i];
		}
	}
	cout << result.str() << endl;

	
	//getchar();
	//getchar();
	return 0;
}