#include<iostream>
#include<stdio.h>

using namespace std;

int A1()
{
	__int64 m, n, a, sum, x, y;
	while (scanf_s("%I64d %I64d %I64d", &n, &m, &a) != EOF)
	{
		x = n % a == 0 ? n / a : n / a + 1;
		y = m % a == 0 ? m / a : m / a + 1;
		//       printf("%I64d %I64d\n",x,y);
		sum = x * y;
		printf("%I64d\n", sum);
	}

	return 0;
}