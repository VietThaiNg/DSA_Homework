#include<iostream>
using namespace std;

void insertionSort(int* a, int n, int &cnt)
{
	for (int i = 0; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0)
		{
			cnt++; 
			if (a[j] > key)
			{
				a[j + 1] = a[j];
				j = j - 1;
			}
			else break;
		}
		a[j + 1] = key;
	}
}