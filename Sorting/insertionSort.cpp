//
// Created by 91914 on 29-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& v) {
    for (int i = 0; i < v.size()-1; i++) {
        for (int j = i+1; j > 0; j--) {
            if (v[j] < v[j-1]) {
                int t = v[j-1];
                v[j-1] = v[j];
                v[j] = t;
            } else break;
        }
    }
}

//TC o(n^2) wors and average
//best case is O(n) because we write else break;

int main() {


    vector<int> v = {5,4,2,1,3};
    insertionSort(v);
    for (int x : v) cout << x << " " ;
}
