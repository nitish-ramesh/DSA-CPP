//
// Created by 91914 on 05-09-2026.
//

#include <iostream>
using namespace std;

int cnt = 0;

void f1() {
    cout << cnt << endl;
    cnt++;

    if (cnt == 2) return;
    else f1();
}

int main() {

    f1();

    return 0;
}
