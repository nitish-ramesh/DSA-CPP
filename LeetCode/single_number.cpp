//
// Created by 91914 on 03-09-2026.
//

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int x : nums) {
        ans = ans ^ x;
    }
    return ans;
}

int main() {
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);
    return 0;
}
