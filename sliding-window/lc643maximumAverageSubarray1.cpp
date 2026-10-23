//
// Created by 91914 on 23-10-2026.
//
#include <iostream>
#include <vector>
using namespace std;

/*
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.



Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
 */

double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum+=nums[i];
    }
    double avg = sum / k;
    double maxAvg = avg;

    for (int i = k; i < nums.size(); i++) {
        sum = sum - nums[i-k] + nums[i];

        avg = sum/k;
        if (avg > maxAvg) maxAvg = avg;
    }

    return maxAvg;

}

//TC -> O(k) + O(n-k) = O(n)


int main() {

vector<int> v = {1,12,-5,-6,50,3};

    cout << findMaxAverage(v, 4);
}