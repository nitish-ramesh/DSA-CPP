//
// Created by 91914 on 11-10-2026.
//

#include <iostream>
using namespace std;

/*

67. Add Binary
Solved
Easy
Topics
premium lock icon
Companies
Given two binary strings a and b, return their sum as a binary string.



Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"


Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.

 */

string addBinary(string a, string b) {

 string ans;
 int carry = 0;
 int i = a.length()-1;
 int j = b.length()-1;

 while (i >= 0 || j >= 0 || carry) { // till when ele remain in a or b or carry remain
  if (i >= 0) {
   carry += a[i--] - '0'; // - '0' convert char to integer and [i--] means first use i then subtract
  }

  if (j >= 0) {
   carry += b[j--] - '0';
  }

  ans += carry % 2 + '0'; // + '0' convert integer to char
  carry /= 2; // calculate carry
 }

 reverse(begin(ans), end(ans));
 return ans;

}

int main() {

 string a = '11';
 string b = '1';



}
