//
// Created by 91914 on 23-10-2026.
//
#include <iostream>
#include <vector>
using namespace std;

int maximumSum(vector<int>& v, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    int maxSum = sum;

    for (int i = k; i < v.size(); i++) {
         sum = sum - v[i-k] + v[i];

        if (sum > maxSum) maxSum = sum;
    }
    return maxSum;
}

int main() {
    vector<int> v = {4,3,-5,8,1,3,0,-2,1};
    int k= 3;

    cout << maximumSum(v, k);
}