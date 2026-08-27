//
// Created by 91914 on 27-08-2026.
//
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        int l = n % 10;
        rev = rev * 10 + l;
        n /= 10;
    }
    return rev;

}

int main() {
    cout <<  reverseNumber(234500);
    return 0;
}
