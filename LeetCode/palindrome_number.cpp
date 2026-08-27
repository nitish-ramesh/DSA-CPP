//
// Created by 91914 on 26-08-2026.
//

#include <iostream>

bool palindrome(int x) {
    int org = x;
    int rev = 0;
    int digit = 0;
    while (x > 0) {
        digit = x % 10;
        rev = (rev * 10) + digit;
        x = x/10;
    }
    if (rev == org)return true;
    return false;
}

using namespace std;
int main() {
    if (palindrome(121)) {
        cout << "true";
    }
    else cout << "false";
    return 0;
}

