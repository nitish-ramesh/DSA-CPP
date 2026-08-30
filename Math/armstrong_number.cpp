//
// Created by 91914 on 27-08-2026.
//
#include <iostream>
#include <cmath>
using namespace std;

bool armstrong_check(int n) {
    int org = n;
    int add = 0;

    while (n > 0) {
        int l = n % 10;
        add = add + (l*l*l);
        n = n / 10;
    }
    if (add == org) {
        return true;
    }
    return false;
}

int main() {


    if (armstrong_check(373)) {
        cout << "True";
    }
    else cout<< "false";

    return 0;
}
