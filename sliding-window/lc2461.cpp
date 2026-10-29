//
// Created by 91914 on 25-10-2026.
//

/*
You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

The length of the subarray is k, and
All the elements of the subarray are distinct.
Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

A subarray is a contiguous non-empty sequence of elements within an array.



Example 1:

Input: nums = [1,5,4,2,9,9,9], k = 3
Output: 15
Explanation: The subarrays of nums with length 3 are:
- [1,5,4] which meets the requirements and has a sum of 10.
- [5,4,2] which meets the requirements and has a sum of 11.
- [4,2,9] which meets the requirements and has a sum of 15.
- [2,9,9] which does not meet the requirements because the element 9 is repeated.
- [9,9,9] which does not meet the requirements because the element 9 is repeated.
We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions
Example 2:

Input: nums = [4,4,4], k = 3
Output: 0
Explanation: The subarrays of nums with length 3 are:
- [4,4,4] which does not meet the requirements because the element 4 is repeated.
We return 0 because no subarrays meet the conditions.


Constraints:

1 <= k <= nums.length <= 105
1 <= nums[i] <= 105
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {

 unordered_map<int , int> mp;

 long long sum = 0;
 long long maxsum = 0;

 for (int i = 0; i < k; i++) {
  sum += nums[i];
  mp[nums[i]]++;
 }

 if (mp.size() == k) maxsum = sum;


 for (int i = k; i < nums.size(); i++) {

  sum = sum - nums[i-k] + nums[i];

  // if (mp.find(nums[i-k]) != mp.end()) {
   mp[nums[i-k]]--;
   if (mp[nums[i-k]] == 0) {
    mp.erase(nums[i-k]);
   }
  // }
  mp[nums[i]]++;

  if (mp.size() == k && sum > maxsum) maxsum = sum;

 }

 return maxsum;

 // tc = O(n)
 //sc = O(k) in map can be k distinct ele

}

int main() {

 vector<int> v = {9,9,9,1,2,3};

 cout << maximumSubarraySum(v, 3);
}