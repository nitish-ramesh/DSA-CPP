//
// Created by 91914 on 24-10-2026.
//
/*
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.



Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int cnt = 0;

    for (int i = 0; i < k; i++) {
        if (vowels.find(s[i]) != vowels.end()) {
            cnt++;
        }
    }
    int mxV = cnt;

    for (int i = k; i < s.size(); i++) {

        if (vowels.find(s[i]) != vowels.end()) {
            cnt++;
        }
        if (vowels.find(s[i-k]) != vowels.end()) {
            cnt--;
        }
        if (cnt > mxV) mxV = cnt;
    }

    return mxV;
}

/*
 tc is O(n) , here unordered set searching take O(1) so we traverse one time
 space is O(1) because in vowels set has only 5 char
 */

int main() {
    string s = "abciiidef";
    cout << maxVowels(s, 3);
}
