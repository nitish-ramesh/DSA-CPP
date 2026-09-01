//
// Created by 91914 on 27-08-2026.
//
#include <iostream>
#include <vector>
using namespace std;

void removeElement(vector<int>& nums, int val) {
    int i = 0;

    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    cout << i << endl;
    for (int i : nums) {
        cout << i << " ";
    }
}

int main() {
    vector<int> nums = {3,2,2,3};
    cout << nums.size() << endl;
    removeElement(nums, 3) ;

    return 0;
}
