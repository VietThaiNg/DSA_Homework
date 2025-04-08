#include<iostream>
using namespace std;

void merge(int* a, int left, int mid, int right, int& cnt)
{
	int i = left, j = mid + 1;
	int k = 0;
	int* tmp = new int[right - left + 1];
	while (i <= mid && j <= right)
	{
		cnt++;
		if (a[i] > a[j])
		{
			tmp[k++] = a[j];
			j++;
		}
		else
		{
			tmp[k++] = a[i];
			i++;
		}
	}

	while (i <= mid)
	{
		tmp[k++] = a[i];
		i++;
	}
	while (j <= right)
	{
		tmp[k++] = a[j];
		j++;
	}

	for (int x = 0; x < k; x++)
	{
		a[left + x] = tmp[x];
	}
}

void mergeSort(int* a, int l, int r, int&cnt)
{
	if (l >= r) return;
	int mid = l + (r - l) / 2;
	mergeSort(a, l, mid,cnt);
	mergeSort(a, mid + 1, r,cnt);
	merge(a, l, mid, r,cnt);
}
