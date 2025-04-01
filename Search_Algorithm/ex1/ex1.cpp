#include<iostream>
using namespace std;

int linearSearch(int* a, int n, int k)
{
	int position = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			position = i;
			break;
		}
	}
	return position;
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
	cout << linearSearch(a, n, k);
	delete[] a;
	return 0;
}