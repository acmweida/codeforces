#include <iostream>
#include<cstdio>
using namespace std;
int A282()
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 1; i <= n; i++)
	{
		char a[4];
		scanf("%s", a);
		if (a[0] == '+' || a[1] == '+')
			x++;
		if (a[0] == '-' || a[1] == '-')
			x--;
	}
	printf("%d", x);
}
