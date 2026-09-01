//
// Created by 91914 on 01-09-2026.
//
#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {

    for (int i = 0;  i + needle.size() <= haystack.size(); i++) {
        string s2;
        for (int j = i; j < needle.size()+i; j++) {
            s2 = s2 + haystack[j];
        }
        if (needle == s2) {
            return i;
        }
    }
    return -1;

}


int main() {

    int ans = strStr("aaa", "aaaa");
    cout << ans;
    return 0;
}
