//
// Created by 91914 on 03-10-2026.
//
#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int partionIndex(vector<int>& v, int low, int high) {

    int pvt = v[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (v[i] <= pvt && i < high) {
            i++;
        }

        while (v[j] > pvt && j >= low) {
            j--;
        }
        if (i < j) swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void quickSort(vector<int>& v, int low, int high) {

    if (low < high) {

        int pi = partionIndex(v, low, high);

        quickSort(v, low, pi-1);
        quickSort(v, pi+1, high);

    }

}

int main() {

    vector<int> v = {5,4,3,2,1};

    quickSort(v, 0, v.size()-1);

    for (int x : v) cout << x << " ";

}