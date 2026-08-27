//
// Created by 91914 on 26-08-2026.
//
#include <iostream>
#include <vector>
using namespace std;



// int removeDuplicates(vector<int>& nums) {
//     set <int> st;
//     int k = 0;
//     for(auto it = nums.begin(); it != nums.end(); it++) {
//         st.insert(*(it));
//     }
//     for(auto i : st) {
//         nums[k] = i;
//         k++;
//     }
//     return k;
// }



 void removeDuplicates(vector<int>& nums) {

        int i = 0;
        int j = i+1;

    while (j  < nums.size()) {

        if (nums[i] != nums[j]) {

            nums[i + 1] = nums[j];
            i++;
            j++;

        }
        else j++;

    }
    for (int i : nums) {
        cout << i;
    }
}

int main() {
    // vector<int> v= {2,3,4,5,6};
    // cout << *(v.end()-1);
     vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        cout << nums.size() << endl;
     removeDuplicates(nums) ;

    return 0;
}