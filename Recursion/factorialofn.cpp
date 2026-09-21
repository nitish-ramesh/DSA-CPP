//
// Created by 91914 on 21-09-2026.
//
#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n-1);
    }

}

int main() {

    cout << fact(4) << endl;
}