//
// Created by 91914 on 28-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

// push the max ele last by the adjecent swap

void bubbleSort(vector<int>& v) {
    for (int i = 0; i < v.size()-i; i++) {
        for (int j = 0; j < v.size()-i-1; j++) {
            if (v[j] > v[j+1]) {
                int t = v[j+1];
                v[j+1] = v[j];
                v[j] = t;
            }
        }
    }
}

// TC is same as selection sort O(n) -> best , wors, average
// best case can optimeze if already in sorted lets optimize bubbleort

void OptmizeBubbleSort(vector<int>& v) {
    for (int i = 0; i < v.size()-i; i++) {
        int swap = 0;
        for (int j = 0; j < v.size()-i-1; j++) {
            if (v[j] > v[j+1]) {
                int t = v[j+1];
                v[j+1] = v[j];
                v[j] = t;
                swap++;
            }
        }
        if (swap == 0) break;
    }
}

void bubbleSortbyrecursion(vector<int>& v, int k) {

    if (k >= v.size()-1) return;

    int swap = 0;
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] > v[i+1]) {
            int t = v[i+1];
            v[i+1] = v[i];
            v[i] = t;
            swap++;
        }
    }
    if (swap == 0) return;

    bubbleSortbyrecursion(v, k+1);
}

int main() {

    vector<int> v = {1,2,3,4,5};
    OptmizeBubbleSort(v);
    for (int x : v) cout << x << " ";

}
