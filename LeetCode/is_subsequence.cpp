//
// Created by 91914 on 05-09-2026.
//

#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0;
    for(int j = 0; j < t.size(); j++) {
        if(s[i] == t[j]) {
            i++;
        }

    }
    if(i == s.size()) return true;
    else return false;
}

int main() {

    cout << isSubsequence("abc", "ahbgdc");

    return 0;
}
