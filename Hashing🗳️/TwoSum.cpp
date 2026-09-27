#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

 unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (hash.find(need) != hash.end()) {
            return {hash[need], i};
        }
        hash[nums[i]] = i;
    }
    return {};

}


int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);
    for (int x : ans)
        cout << x << " ";


}
