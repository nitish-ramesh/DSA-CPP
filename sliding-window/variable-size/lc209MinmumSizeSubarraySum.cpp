//
// Created by 91914 on 30-10-2026.
//
#include <iostream>
#include <vector>
using namespace std;

/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
 */



// int minSubArrayLen(int target, vector<int>& v) {
//  int minindex = INT_MAX;
//  int i = 0;
//  int j = 0;
//  int sum = v[0];
//  while (j < v.size()-1) {
//
//   if (sum < 11) {
//    j++;
//    sum += v[j];
//   }
//   if (sum >= 11) {
//    sum -= v[i];
//    i++;
//   }
//   if (sum >=11) {
//    int indxcount = j-i+1;
//    if (indxcount < minindex) minindex = indxcount;
//   }
//  }
// return minindex;
// }

 int minSubArrayLen(int target, vector<int>& nums) {

  int left = 0;
  int sum = 0;
  int minLen = INT_MAX;

  for (int right = 0; right < nums.size(); right++) {

   // Expand the window
   sum += nums[right];

   // Shrink the window while condition is satisfied
   while (sum >= target) {

    int len = right - left + 1;

    minLen = min(minLen, len);

    sum -= nums[left];
    left++;
   }
  }

  return minLen == INT_MAX ? 0 : minLen;
 }



int main() {
vector<int> v = {1,2,3,4,5};
 cout << minSubArrayLen(7, v);
}