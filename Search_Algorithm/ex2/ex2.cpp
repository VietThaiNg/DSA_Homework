#include<iostream>
using namespace std;

int linearSearchOptimize(int* a, int n, int k)
{
	int i = 0;
	for (; a[i] != k; i++);
	if (i < n) return i;
	else return -1;
}

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	cout << linearSearchOptimize(a, n, k);
	delete[] a;
	return 0;
}