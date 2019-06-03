#include<string.h>
#include "class.h"
using namespace std;
#ifndef UTIL_H
#define UTIL_H
void printInt(int *arr, int lenth);    //���Int����
void printChar(char *arr, int lenth);    //���Char����
void printMatrix(int **arr, int column, int line);  //����������
void INSERTON_SORT(int *arr, int lenth); //��������
void MERFE(int *arr, int p, int q, int r); //�鲢���򣺹鲢�׶�
void MERGE_SORT(int *arr, int p, int r);  //�鲢����
MAX_SUBARRAY FIND_MAX_CROSSING_SUBARRAY(int *arr, int low, int mid, int high); //��������飺������м�ڵ�������Լ���ʼ��������ַ
MAX_SUBARRAY FIND_MAXIMUM_SUBARRAY(int *arr, int low, int high); //���������
int **SQUARE_MATRIX_MULTIPLY(int **arr1, int *arr2[], int rows); //����˷��� ��˲���
int PARENT(int i); // �ѣ����ڵ�
int LEFT(int i); //�ѣ����ӽڵ�
int RIGHT(int i); //�ѣ����ӽڵ�
void swap(int *a, int *b); //����������
void MAX_HEAPIFY(int *arr, int i, int lenth); //�ѣ�ά�ֶ�����
void BUILD_MAX_HEAP(int *arr, int lenth); // �ѣ�����
void HEAPSORT(int *arr, int lenth); //������
int PARTITION(int *arr, int p, int r); //�������򣺶�������ԭַ����
void QUICKSORT(int * arr, int p, int r); // ��������
void RANDOMIZED_QUICKSORT(int* arr, int p, int r); //������汾��������:
int RANDOMIZED_SELECT(int* arr, int p, int r, int i); //��ȡ�ڼ�����
char TO_UPPER(char c);
char TO_LOWER(char c);
string&   replace_all(string&   str, const   string&   old_value, const   string&   new_value);// �ַ����滻���滻������滻:
string&   replace_all_distinct(string&   str, const   string&   old_value, const   string&   new_value);// �ַ����滻���滻��������滻:
#endif //UTIL_H
