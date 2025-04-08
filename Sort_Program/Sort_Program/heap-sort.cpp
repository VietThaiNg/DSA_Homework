#include<iostream>
using namespace std;

void heapify(int* a, int n, int i, int& cnt) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        cnt++;
        if (a[left] > a[largest]) {
            largest = left;
        }
    }

    if (right < n) {
        cnt++; 
        if (a[right] > a[largest]) {
            largest = right;
        }
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest, cnt);
    }
}

void heapSort(int* a, int n, int& cnt) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i, cnt);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(a[i], a[0]);
        heapify(a, i, 0, cnt);
    }
}