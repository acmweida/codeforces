#include<iostream>
#include<string>
#include <sstream>
#include<queue>
using namespace std;

int A339() {
	priority_queue<char, vector<char>, greater<char>> minHeap;
	string n;
	stringstream ss;
	cin >> n;
	for (int i = 0;i < n.size();i++) {
		if (n[i] != '+') {
			minHeap.push(n[i]);
		}
	}
	ss << minHeap.top();
	minHeap.pop();
	while (minHeap.size() > 0) {
		ss << "+" << minHeap.top();
		minHeap.pop();
	}
	cout << ss.str() << endl;
	//getchar();
	//getchar();
	return 0;

}