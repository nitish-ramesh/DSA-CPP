//
// Created by 91914 on 20-10-2026.
//
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 */


//this algo fail in this test case nums1 = 1,2,2,1 , nums2 = 1,2
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> temp;

    for(int i = 0; i < nums1.size(); i++) {
        for(int j = 0; j < nums2.size(); j++) {
            if(nums1[i] == nums2[j]) {
                if (!temp.empty()) {
                    if (temp.back() != nums2[j]) {
                        temp.push_back(nums2[j]);
                    }
                } else {
                    temp.push_back(nums2[j]);
                }


                break;
            }
        }
    }
    if (temp.empty()) return {0};
    return temp;
}


// this algo pass all the test cases
vector<int> intersection2(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s;
    for(int i = 0; i < nums1.size(); i++) {
        for(int j = 0; j < nums2.size(); j++) {
            if(nums1[i] == nums2[j]) {
                s.insert(nums2[j]);
            }
        }
    }
    vector<int> temp(s.begin(), s.end());
    if (temp.empty()) return {0};
    return temp;

}

int main () {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {3,4};
    vector<int> ans = intersection2(nums1, nums2);
    for (int x : ans) cout << x << " ";
}