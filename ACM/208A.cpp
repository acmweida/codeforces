#include<iostream>
#include<vector>
#include<algorithm>
#include <sstream>
#include<string>
using namespace std;

string&   replace_all_this(string&   str, const   string&   old_value, const   string&   new_value)
{
	while (true) {
		string::size_type   pos(0);
		if ((pos = str.find(old_value)) != string::npos)
			str.replace(pos, old_value.length(), new_value);
		else   break;
	}
	return   str;
}
int A208() {
	string song;
	string::size_type  s, e;
	while (cin >> song) {
		replace_all_this(song, "WUB"," ");
		replace_all_this(song, "  ", " ");
		e = song.size();
		s = 0;
		if (song[0] == ' ')
			s = 1;
		if (song[e] == ' ')
			e--;
		song = song.substr(s, e);
		cout << song << endl;
	}
	return 0;
}