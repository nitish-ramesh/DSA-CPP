//
// Created by 91914 on 19-10-2026.
//
#include <iostream>
using namespace std;

/*

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.



Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0


Constraints:

0 <= num <= 231 - 1


Follow up: Could you do it without any loop/recursion in O(1) runtime?

 */

int addDigits(int n) {
 if(n < 10) return n;
 int sum = 0;
 while(n > 0) {
  int sd = n % 10;
  sum += sd;
  n/= 10;
 }
 return addDigits(sum);

}

int optimalsoln(int n) {
 return 1 + (n - 1) % 9; // if n % 9 then 9's factor number recevie 0 like 18 if we fo 18%9 = 0
 //so why this
}

int main () {
cout << addDigits(58);
 cout << endl;
 cout << optimalsoln(58);
}