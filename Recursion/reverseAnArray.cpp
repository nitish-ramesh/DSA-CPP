//
// Created by 91914 on 22-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

void swap(int& i, int& j) {
    int t = j;
    j = i;
    i = t;
}

void fn(vector<int>& v, int l, int r) {
    if (l>=r) return;

    swap(v[l], v[r]);

    fn(v, l + 1, r - 1);
}

// can i do with single variable, yeah i can mf

void fn1 (vector<int>& v, int i) {
    if (i == (v.size()-1) / 2) return;

    swap(v[i], v[v.size()-1-i]);

    fn1(v, i+1);
}

int main() {

    vector<int> v = {1, 2, 3, 4};
    // fn(v, 0, v.size()-1);
    fn1(v, 0);

    for (int x : v) {
        cout << x << " ";
    }

}
