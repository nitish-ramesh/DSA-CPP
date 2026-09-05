//
// Created by 91914 on 05-09-2026.
//
#include <iostream>
using namespace std;

char findTheDifference(string s, string t) {
    char ans = 0;
    for(int i = 0; i <= s.size(); i++) {
        ans = ans ^ s[i] ^ t[i]; // here s.size pe koi element nhi h
        //but c++ wahan ka garbage value utha rahi aur usko ^ me dal rahi h
    }
    return ans;
}

int main() {
    return 0;
    cout << findTheDifference("abcd", "abcde");
}
