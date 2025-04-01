#include<iostream>
using namespace std;

bool check(int* weight, int n, int days, int capacity)
{
	int current = 0;
	int requiredDays = 1;

	for (int i = 0; i < n; i++)
	{
		if (current + weight[i] > capacity)
		{
			requiredDays++;
			current = weight[i];
		}
		else
		{
			current += weight[i];
		}
	}

	if (requiredDays <= days) return true;
	else return false;
}

int ship(int* weight, int n, int days)
{
	int maxW = -1e9;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		maxW = max(maxW, weight[i]);
		total += weight[i];
	}

	int left = maxW;
	int right = total;
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (check(weight, n, days, mid))
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return left;
}

int main()
{
	int n;
	cin >> n;
	int* weight = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}
	int days;
	cin >> days;
	cout << ship(weight, n, days);
	delete[] weight;
	return 0;
}