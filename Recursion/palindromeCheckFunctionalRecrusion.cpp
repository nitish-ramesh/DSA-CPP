//
//
// Created by 91914 on 22-09-2026.
//

#include <iostream>
using namespace std;

bool fn(string& s, int i) {
    if (i >= s.size()/2) return true;

    if (s[i] != s[s.size()-1-i]) return false;

    return fn(s, i+1);
}


int main() {
    string s = "madam";
    cout << fn(s, 0);
}
