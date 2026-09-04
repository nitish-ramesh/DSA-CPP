//
// Created by 91914 on 04-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

// Learned Boyer-Moore Voting Algorithm.
// Maintain a candidate and a count while traversing the array.
// Same element increases count, different element decreases it.
// If count becomes 0, choose the current element as the new candidate.
// Time: O(n), Space: O(1).

int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int n = 0;
    for (int i = 0; i < nums.size(); i++) {
        if(cnt == 0) n = nums[i];

        if (nums[i] == n) {
            cnt++;
        }else cnt--;
    }
    return n;
}



int main() {
    vector<int> nums = {2,1,2,1,1};

    cout << majorityElement(nums);

    return 0;
}
