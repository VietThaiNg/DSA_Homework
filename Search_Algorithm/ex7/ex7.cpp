#include<iostream>
#include"sort.h"
using namespace std;


void threeSum(int* a, int n)
{
	quickSort(a, 0, n - 1);
	int check = -1;
	for (int i = 0; i < n - 2; i++)
	{
		if (i > 0 && a[i] == a[i - 1]) continue;
		int l = i + 1;
		int r = n - 1;
		while (l < r)
		{
			if ((a[i] + a[l] + a[r]) == 0)
			{
				cout << "[" << a[i] << ", " << a[l] << ", " << a[r] << "]" << " ";
				check = 1;
				while (l < r && a[l] == a[l + 1]) l++;
				while (l < r && a[r] == a[r - 1]) r--;
				l++;
				r--;
			}
			else if ((a[i] + a[l] + a[r]) < 0)
			{
				l++;
			}
			else r--;
		}
	}
	if (check == -1) cout << "No satisfied triplet.";
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
	threeSum(a, n);
	delete[] a;
	return 0;
}