#include<iostream>
using namespace std;

void merge(int* a, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    int k = 0;
    int* tmp = new int[right - left + 1];
    while (i <= mid && j <= right)
    {
        if (a[i] > a[j])
            tmp[k++] = a[j++];
        else
            tmp[k++] = a[i++];
    }
    while (i <= mid)
        tmp[k++] = a[i++];
    while (j <= right)
        tmp[k++] = a[j++];
    for (int x = 0; x < k; x++)
        a[left + x] = tmp[x];
    delete[] tmp;
}

void mergeSort(int* a, int l, int r)
{
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
}
