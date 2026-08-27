//
// Created by 91914 on 27-08-2026.
//

#include <iostream>
using namespace std;

bool palindromeNumber(int n) {
    int org = n;
    int rev = 0;
    while(n > 0) {
        int l = n % 10;
        rev = rev*10 + l;
        n /= 10;
    }
    if (org == rev)return true;
    return false;
}

int main() {
    cout << palindromeNumber(1210);
    return 0;
}
