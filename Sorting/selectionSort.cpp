//
// Created by 91914 on 28-09-2026.
//
#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int min = i;
        for (int j = i;  j < v.size(); j++) {
            if (v[j] < v[min]) min = j;
        }
        int temp = v[min];
        v[min] = v[i];
        v[i] = temp;
    }
}

// TC is [n(n+1)] / 2 = > n^2 / 2 + n/2  ==> O(n^2) -> Best, wors and average

int main() {
    vector<int> v = {4, 3,1, 2};
    selection_sort(v);
    for (int x : v) cout << x << " ";
}

