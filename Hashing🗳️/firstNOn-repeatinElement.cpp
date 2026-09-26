//
// Created by 91914 on 26-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

int firsfreqEle(vector<int> & v) {
    int hash[11] = {0};
    for (int i = 0; i < v.size(); i++) {
        hash[v[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        if (hash[v[i]] == 1) return v[i];
    }
    return 0;
}

int main() {

    vector<int> nums = {4, 2, 7, 2, 4, 7, 9, 5, 9,6};
    cout << firsfreqEle(nums);

}
