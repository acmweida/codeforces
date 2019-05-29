#include <iostream>
#include "util.h"
#include "limits.h"
#include "class.h"
#include <stdlib.h>

/*
	Author: 2456910384@qq.com
*/
/*
  Name: print
  Description: 输出数组
  Date: 02-01-19
  Copyright:
*/
void printInt(int *arr, int lenth) {
	for (int i = 0;i < lenth;i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void printChar(char *arr, int lenth) {
	for (int i = 0;i < lenth;i++) {
		printf("%c\t", arr[i]);
	}
	printf("\n");
}

/*
  Name: printMatrix
  Description: 输出数组矩阵
  Date: 03-01-19
  Copyright:
*/
void printMatrix(int **arr, int column, int line) {
	for (int i = 0;i < line;i++) {
		for (int j = 0;j < column;j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

/*
  Name: INSERTON-SORT
  Description: 插入排序  从小到大
  Date: 02-01-19
  Copyright:
   example:
		int a[6] = { 7,0,1,9,4,5 };
		print(a, 6);
		INSERTON_SORT(a,6);
		print(a, 6);
		getchar();
*/
void INSERTON_SORT(int *arr, int lenth) {
	int i;
	int  key;
	for (int j = 1;j < lenth;j++) {
		key = arr[j];
		i = j - 1;
		while (i > 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}

/*
  Name: MERFE
  Description: 合并排序MERFE阶段（归并）
  Date: 02-01-19
  parm :
  Copyright:
*/
void MERFE(int *arr, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int *L = new int[n1 + 1];
	int *R = new int[n2 + 1];
	for (int i = 0;i < n1;i++) {
		L[i] = arr[p + i];
	}
	//print(L, n1);
	for (int i = 0;i < n2;i++) {
		R[i] = arr[q + i + 1];
	}
	//print(R, n2);
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	int i = 0;
	int j = 0;
	for (int k = p; k <= r;k++) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			//printf("%d",A[k]);
			i = i + 1;
		}
		else {
			arr[k] = R[j];
			//printf("%d", A[k]);
			j = j + 1;
		}
		//printf("%d %d", i,j);
	}
	//print(A, 6);
	free(L);
	free(R);
}

/*
  Name: MERGE_SORT
  Description: 合并排序
  Date: 02-01-19
  Copyright:
  example:
		int a[6] = { 7,0,1,9,4,5 };
		print(a, 6);
		MERGE_SORT(a,0,2,5);
		print(a, 6);
		getchar();
*/
void MERGE_SORT(int *arr, int p, int r) { //r:为个数减一
	int q;
	if (p < r) {
		q = (p + r) / 2;
		MERGE_SORT(arr, p, q);
		MERGE_SORT(arr, q + 1, r);
		MERFE(arr, p, q, r);
	}
}



/*
Name: FIND_MAX_CROSSING_SUBARRAY
	Description : 最大子数组：计算跨中间节点的最大合以及起始，结束地址
	Date : 03 - 01 - 19
	Copyright :
	example:
		int a[6] = { 7,0,1,9,4,5 };
		print(a, 6);
		MAX_SUBARRAY max_subarray = FIND_MAX_CROSSING_SUBARRAY(a,0,2,5);
		printf("%d  %d  %d",max_subarray.max_left , max_subarray.max_right , max_subarray.left_sum_right_sum);
		print(a, 6);
		getchar();
}
*/
MAX_SUBARRAY FIND_MAX_CROSSING_SUBARRAY(int *arr, int low, int mid, int high) {
	int left_sum = INT_MIN;
	int max_left = mid;
	int sum = 0;
	for (int i = mid; i >= low;i--) {
		sum += arr[i];
		if (sum >= left_sum) {
			left_sum = sum;
			max_left = i;
		}
	}
	int max_right = mid + 1;
	int right_sum = INT_MIN;
	sum = 0;
	for (int i = mid + 1; i <= high;i++) {
		sum += arr[i];
		if (sum >= right_sum) {
			right_sum = sum;
			max_right = i;
		}
	}
	MAX_SUBARRAY max_subarray;
	max_subarray.max_left = max_left;
	max_subarray.max_right = max_right;
	max_subarray.left_sum_right_sum = left_sum + right_sum;
	return max_subarray;
}

/*
Name: FIND_MAX_CROSSING_SUBARRAY
	Description : 最大子数组
	Date : 03 - 01 - 19
	Copyright :
	example:
		int a[16] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7 };
		print(a, 6);
		MAX_SUBARRAY max_subarray= FIND_MAXIMUM_SUBARRAY(a, 0, 15);
		printf("%d  %d  %d", max_subarray.max_left, max_subarray.max_right, max_subarray.left_sum_right_sum);
		getchar();
*/
MAX_SUBARRAY FIND_MAXIMUM_SUBARRAY(int *arr, int low, int high) {
	MAX_SUBARRAY max_crossing_subarray;
	if (high == low) {
		max_crossing_subarray.max_left = low;
		max_crossing_subarray.max_right = high;
		max_crossing_subarray.left_sum_right_sum = arr[low];
		return max_crossing_subarray;
	}
	else {
		MAX_SUBARRAY max_left_maximum;
		MAX_SUBARRAY max_right_maximum;
		int mid = (low + high) / 2;
		max_left_maximum = FIND_MAXIMUM_SUBARRAY(arr, low, mid);
		max_right_maximum = FIND_MAXIMUM_SUBARRAY(arr, mid + 1, high);
		max_crossing_subarray = FIND_MAX_CROSSING_SUBARRAY(arr, low, mid, high);

		if (max_left_maximum.left_sum_right_sum > max_right_maximum.left_sum_right_sum && max_left_maximum.left_sum_right_sum > max_crossing_subarray.left_sum_right_sum) {
			return max_left_maximum;
		}
		else if (max_right_maximum.left_sum_right_sum > max_left_maximum.left_sum_right_sum && max_right_maximum.left_sum_right_sum > max_crossing_subarray.left_sum_right_sum) {
			return max_right_maximum;
		}
		else {
			return max_crossing_subarray;
		}
	}

}


/*
Name: SQUARE_MATRIX_MULTIPLY
	Description : 矩阵乘法： 相乘步骤
	Date : 03 - 01 - 19
	Copyright :
	example:
		int **arr = new int*[4];
		for (int i = 0;i < 4;i++) {
			arr[i] = new int[4];
			for (int j = 0;j < 4;j++) {
				arr[i][j] = i + j;
			}
		}
		int **arr1 = new int*[4];
		for (int i = 0;i < 4;i++) {
			arr1[i] = new int[4];
			for (int j = 0;j < 4;j++) {
				arr1[i][j] = i - j;
			}
		}
		printMatrix(arr, 4, 4);
		printf("\n");
		printMatrix(arr1, 4, 4);
		printf("\n");
		int **c =SQUARE_MATRIX_MULTIPLY(arr, arr1, 4);
		 printMatrix(c,4,4);
		getchar();
*/
int **SQUARE_MATRIX_MULTIPLY(int **arr1, int *arr2[], int rows) {
	int **arr3 = new int*[rows];
	for (int i = 0;i < rows;i++) {
		arr3[i] = new int[rows];
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < rows;j++) {
			arr3[i][j] = 0;
			for (int k = 0;k < rows;k++) {
				arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
			}
		}
	}
	return arr3;
}

/*
Name: PARENT
	Description : 堆：父节点 下标从0开始
	Date : 03 - 01 - 19
	Copyright :
*/
int PARENT(int i) {
	return (i - 1) / 2;
}


/*
Name: LEFT
	Description : 堆：左子节点  下标从0开始
	Date : 03 - 01 - 19
	Copyright :
*/
int LEFT(int i) {
	return i * 2 + 1;
}

/*
Name: RIGHT
	Description : 堆：右子节点
	Date : 03 - 01 - 19
	Copyright :
*/
int RIGHT(int i) {
	return i * 2 + 2;
}


/*
Name: MAX_HEAPIFY
	Description : 堆：维持堆性质
	Date : 12 - 01 - 19
	Copyright :
		int  a[] = { 16,4,10,14,7,9,2,8,1 };
		MAX_HEAPIFY(a,1,9);
		print(a, 9);
		a[0] = 0;
		MAX_HEAPIFY(a, 0, 9);
		print(a, 9);
		getchar();
*/
void MAX_HEAPIFY(int *arr, int i, int lenth) {
	int l = LEFT(i);
	int r = RIGHT(i);
	int largest;

	if (l<lenth && arr[l] > arr[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r<lenth && arr[r] > arr[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		MAX_HEAPIFY(arr, largest, lenth);
	}
	if (l<lenth && arr[l] > arr[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r<lenth && arr[r] > arr[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		MAX_HEAPIFY(arr, largest, lenth);
	}

	/*最小堆
   if (l<lenth && arr[l] < arr[i]) {
	   largest = l;
   }
   else {
	   largest = i;
   }
   if (r<lenth && arr[r] < arr[largest]) {
	   largest = r;
   }
   if (largest != i) {
	   swap(&arr[i], &arr[largest]);
	   MAX_HEAPIFY(arr, largest, lenth);
   }
   */

}


/*
Name: swap
	Description : 交换两个数
	Date : 12 - 01 - 19
	Copyright :
		int a = 10, b = 2;
		swap(&a, &b);
		printf("%d %d", a, b);
		getchar();
*/
void swap(int *a, int *b) {
	if (a == b) return;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/*
Name: BUILD_MAX_HEAP
	Description :  堆：构建
	Date : 12 - 01 - 19
	Copyright :
		int  a[] = { 16,4,10,14,7,9,2,8,1 };
		BUILD_MAX_HEAP(a,9);
		print(a, 9);
		getchar();
*/
void BUILD_MAX_HEAP(int *arr, int lenth) {
	for (int i = lenth / 2; i >= 0;i--) {
		MAX_HEAPIFY(arr, i, lenth);
	}
}


/*
Name: BUILD_MAX_HEAP
	Description :  堆排序
	Date : 12 - 01 - 19
	Copyright :
		int  a[] = { 16,4,10,14,7,9,2,8,1 };
		BUILD_MAX_HEAP(a,9);
		print(a, 9);
		getchar();
*/
void HEAPSORT(int *arr, int lenth) {
	BUILD_MAX_HEAP(arr, lenth);
	int heap_size = lenth;
	for (int i = lenth - 1;i >= 1;i--) {
		swap(&arr[0], &arr[i]);
		MAX_HEAPIFY(arr, 0, --heap_size);
	}
}

/*
Name: PARTITION
	Description :  快速排序：对子数组原址重排，使的 基准左边 < 基准; 基准右边 > 基准 并返回基准值
	Date : 12 - 01 - 19
	Copyright :
		int  a[] = { 2,8,7,1,3,5,6,4};
		printf("%d\n", PARTITION(a, 0, 7));
		print(a, 8);
		getchar();

*/
int PARTITION(int *arr, int p, int r) {
	int x = arr[r];
	int i = p - 1;
	for (int j = p;j <= r - 1;j++) {
		if (arr[j] >= x) {
			i = i + 1;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return i + 1;
}

/*
Name: QUICKSORT
	Description :  快速排序
	Date : 12 - 01 - 19
	Copyright :
		int  a[] = { 2,8,7,1,3,5,6,4};
		QUICKSORT(a, 0, 7);
		print(a, 8);
		getchar();

*/
void QUICKSORT(int * arr, int p, int r) {
	if (p < r) {
		int q = PARTITION(arr, p, r);
		QUICKSORT(arr, p, q - 1);
		QUICKSORT(arr, q + 1, r);
	}
}


/*
Name: RANDOMIZED_PARTITION
	Description :  随机化版本快速排序:PARTITION
	Date : 12 - 01 - 19
	Copyright :
*/
int RANDOMIZED_PARTITION(int *arr, int p, int r) {
	int i = rand() % (r - p + 1) + p;
	swap(&arr[r], &arr[i]);
	return PARTITION(arr, p, r);
}

/*
Name: RANDOMIZED_QUICKSORT
	Description :  随机化版本快速排序:
	Date : 13 - 01 - 19
	Copyright :
		int  a[] = { 2,8,7,1,3,5,6,4};
		RANDOMIZED_QUICKSORT(a, 0, 7);
		print(a, 8);
		getchar();
*/
void RANDOMIZED_QUICKSORT(int* arr, int p, int r) {
	if (p < r) {
		int q = RANDOMIZED_PARTITION(arr, p, r);
		RANDOMIZED_QUICKSORT(arr, p, q - 1);
		RANDOMIZED_QUICKSORT(arr, q + 1, r);
	}
}


/*
Name: RANDOMIZED_SELECT
	Description :  获取第几大数
	Date : 13 - 01 - 19
	Copyright :
		int  a[] = { 2,8,7,1,3,5,6,4};
		RANDOMIZED_QUICKSORT(a, 0, 7);
		print(a, 8);
		getchar();
*/
int RANDOMIZED_SELECT(int* arr, int p, int r, int i) {
	if (p == r) {
		return arr[p];
	}
	int q = PARTITION(arr, p, r);
	int k = q - p + 1;
	if (p == 0) k--;
	if (i == k) {
		return arr[i];
	}
	else if (i < k) {
		return RANDOMIZED_SELECT(arr, p, q - 1, i);
	}
	else {
		return RANDOMIZED_SELECT(arr, q + 1, r, i - k);
	}
}

/*
Name:  TO_UPPER
	Description :  变大写:
	Date : 29 - 05 - 19
*/
char TO_UPPER(char  c) {
	if (c >= 'a') {
		c -= 32;
	}
	return c;
}

/*
Name:  TO_LOWER
	Description :  变小写:
	Date : 29 - 05 - 19
*/
char TO_LOWER(char  c) {
	if (c < 'a') {
		c += 32;
	}
	return c;
}