#include <iostream>
#include <algorithm> 
void count_sort(int* arr, int n, int pos) {
    int* count = new int[10]();
    for (int i = 0; i < n; i++) {
        count[(arr[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    int* ans = new int[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[--count[(arr[i] / pos) % 10]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
    delete[] count;
    delete[] ans;
}


void radixSort(int* arr, int n) {
    if (n <= 0) return;
    int max_val = *std::max_element(arr, arr + n);
    for (int pos = 1; max_val / pos > 0; pos *= 10) {
        count_sort(arr, n, pos);
    }
}
