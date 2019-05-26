#include<iostream>
#include<stdio.h>
#include<string>
#include <sstream>

using namespace std;

int main()
{
	string word;
	string result;
	stringstream ss;
	int num;
	cin >> num;
	while (num)
	{
		cin >> word;
		if ( word.size() > 10 ) {
			ss << word[0] << word.size()-2 << word[word.size() - 1];
			result = ss.str();
			ss.str("");
		}
		else {
			result = word;
		}
		cout << result << endl;
		num--;
	}
	//getchar();
	//getchar();
	return 0;
}