//
// Created by 91914 on 27-08-2026.
//
#include <iostream>
#include <vector>
using namespace std;

void removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = 0;
        while (j < nums.size() - 1) {
            if (nums[j] == val) {

                int t = nums[i+1];
                nums[i + 1] = nums[j];
                nums[j] = t;
                i++;
                j++;
            }
            else j++;
        }
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
