//
// Created by 91914 on 05-10-2026.
//

#include <iostream>
#include <vector>
 using namespace std;

void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
 vector<int> temp;
 int l = 0;
 int r = 0;

 while(l < m && r < n) {
  if(v1[l] <= v2[r]) {
   temp.push_back(v1[l]);
   l++;
  } else {
   temp.push_back(v2[r]);
   r++;
  }
 }

 while(l < m) {
  temp.push_back(v1[l]);
  l++;
 }

 while( r < n) {
  temp.push_back(v2[r]);
  r++;
 }

 for(int i = 0; i < m+n; i++) {
  v1[i] = temp[i];
 }
}

int mian() {
 vector<int> v1 = {1,2,3};
 vector<int> v2 = {2,5 ,6};
 int m = v1.size();
 int n = v2.size();

 merge(v1,v2,m,n);
}

/*

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.



Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

 */