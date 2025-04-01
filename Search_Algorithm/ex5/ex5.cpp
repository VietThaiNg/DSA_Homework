#include<iostream>
using namespace std;

int smallestSub(int* a, int n, int s)
{
	int l = 0, r;
	long long sum = 0;
	int res = 1e9;
	for (r = 0; r < n; r++)
	{
		sum += a[r];
		while (sum >= s)
		{
			res = min(res, r - l + 1);
			sum -= a[l];
			l++;
		}
	}
	if (res == 1e9) return 0;
	else return res;
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
	int target;
	cin >> target;
	cout << smallestSub(a, n, target);
	delete[] a;
	return 0;
}