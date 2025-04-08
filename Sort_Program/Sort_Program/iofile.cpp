#include<iostream>
#include<fstream>
#include"iofile.h"
using namespace std;

void WriteArrayToFile(const string& filename, int *a, int n) {
    ofstream out(filename);
    if (!out) {
        cerr << "Cannot open output file!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        out << a[i] << " ";
    }
    out.close();
}

void ReadArrayFromFile(const string& filename, int *a, int n) {
    ifstream in(filename);
    if (!in) {
        cerr << "Cannot open input file!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    in.close();
}