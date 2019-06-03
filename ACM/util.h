#include<string.h>
#include "class.h"
using namespace std;
#ifndef UTIL_H
#define UTIL_H
void printInt(int *arr, int lenth);    //输出Int数组
void printChar(char *arr, int lenth);    //输出Char数组
void printMatrix(int **arr, int column, int line);  //输出数组矩阵
void INSERTON_SORT(int *arr, int lenth); //插入排序
void MERFE(int *arr, int p, int q, int r); //归并排序：归并阶段
void MERGE_SORT(int *arr, int p, int r);  //归并排序
MAX_SUBARRAY FIND_MAX_CROSSING_SUBARRAY(int *arr, int low, int mid, int high); //最大子数组：计算跨中间节点的最大合以及起始，结束地址
MAX_SUBARRAY FIND_MAXIMUM_SUBARRAY(int *arr, int low, int high); //最大子数组
int **SQUARE_MATRIX_MULTIPLY(int **arr1, int *arr2[], int rows); //矩阵乘法： 相乘步骤
int PARENT(int i); // 堆：父节点
int LEFT(int i); //堆：左子节点
int RIGHT(int i); //堆：右子节点
void swap(int *a, int *b); //交换两个数
void MAX_HEAPIFY(int *arr, int i, int lenth); //堆：维持堆性质
void BUILD_MAX_HEAP(int *arr, int lenth); // 堆：构建
void HEAPSORT(int *arr, int lenth); //堆排序
int PARTITION(int *arr, int p, int r); //快速排序：对子数组原址重排
void QUICKSORT(int * arr, int p, int r); // 快速排序
void RANDOMIZED_QUICKSORT(int* arr, int p, int r); //随机化版本快速排序:
int RANDOMIZED_SELECT(int* arr, int p, int r, int i); //获取第几大数
char TO_UPPER(char c);
char TO_LOWER(char c);
string&   replace_all(string&   str, const   string&   old_value, const   string&   new_value);// 字符串替换，替换结果再替换:
string&   replace_all_distinct(string&   str, const   string&   old_value, const   string&   new_value);// 字符串替换，替换结果不再替换:
#endif //UTIL_H
