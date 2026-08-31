//
// Created by 91914 on 31-08-2026.
//
#include <iostream>
using namespace std;

int thatfuncion(int duo, int a, int b, int target) {
int i = 2;
    int pro = 1;
    while (duo > 1) {
        if (duo % i == 0) {
            if (pro % i != 0) {
                pro = pro * i;
            }
            duo = duo / i;
        }else i++;
    }

    int s = b/target - (a-1)/target;
    int t = b/pro - (a-1)/pro;
    int ans = s-t;

    return ans;
}

int main() {
    cout << thatfuncion(54, 1000, 9999, 2);

    return 0;
}
