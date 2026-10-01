//
// Created by 91914 on 01-10-2026.
//

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high) {
    int i = 0;
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}

void mergeshort(vector<int>& v, int low, int high) {

    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeshort(v,low, mid);
    mergeshort(v, mid+1, high);
    merge(v, low, mid, high);
}

int main() {
    vector<int> v = {8, 3, 7, 2, 5, 1};
    int low = 0;
    int high = v.size()-1;
    mergeshort(v, low, high);
    for (int x : v) cout << x << " ";
}