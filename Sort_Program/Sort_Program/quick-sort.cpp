#include<iostream>
using namespace std;


int patrition(int* a, int l, int r, int& cnt)
{
	int pivot = a[r];
	int i = l - 1;
	for (int j = l; j < r; j++)
	{
		cnt++;
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	i++;
	swap(a[i], a[r]);
	return i;
}

void quickSort(int* a, int l, int r, int& cnt)
{
	if (l >= r) return;
	int p = patrition(a, l, r, cnt);
	quickSort(a, l, p - 1, cnt);
	quickSort(a, p + 1, r, cnt);
}
