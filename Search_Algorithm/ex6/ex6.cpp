#include<iostream>
using namespace std;

void existSum(int* a, int n, int s)
{
	int l = 0;
	int r = n - 1;
	while (l < r)
	{
		if (a[l] + a[r] == s)
		{
			cout << "YES";
			return;
		}
		else if (a[l] + a[r] > s)
		{
			r--;
			continue;
		}
		else
		{
			l++;
			continue;
		}
	}
	cout << "NO";
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
	existSum(a, n, k);
	delete[] a;
	return 0;
}