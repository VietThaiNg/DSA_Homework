#include<iostream>
using namespace std;

int min(int* a, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (a[mid] > a[right])
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}
	return a[left];
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
	cout << min(a, n);
	delete[] a;
	return 0;
}