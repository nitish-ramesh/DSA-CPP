//
// Created by 91914 on 20-09-2026.
//
#include <iostream>
using namespace  std;

void helper(const string& s, int& i, int& j) { //const string& s => se ab direct
    //org se check krega toh tc thoda btter hoga,
    // string s => me har recursive call me s copy hoga, jisse thoda slow ho jayega code
    if (isalnum(s[i]) && isalnum(s[j]))
        return;
    if (i >= j)
        return;

    if (!isalnum(s[i])) {
        i++;
        helper(s, i, j);
    }

    if (!isalnum(s[j]) ) {
        j--;
        helper(s, i, j);
    }
}

bool isPalindrome(string s) {

    int i = 0;
    int j = s.size() - 1;
    while (i < j) {

        helper(s, i, j);
        if(i >= j) return true;

        if (tolower(s[i]) == tolower(s[j])) {
            i++;
            j--;
        } else {
            return false;
        }
    }
    return true;
}

int  main() {
    cout << isPalindrome("A man, a plan, a canal: Panama");

    return 0;
}
