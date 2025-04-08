#include<iostream>
#include"merge-sort.h"
#include"quick-sort.h"
#include"radix-sort.h"
#include"selection-sort.h"
#include"insertion-sort.h"
#include"heap-sort.h"
#include"bubble-sort.h"
using namespace std;


int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}