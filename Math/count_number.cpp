//
// Created by 91914 on 27-08-2026.
//
#include <cmath>;
#include <iostream>
using namespace std;

int countNumber(int n) {
    int cnt = 0;
    while (n > 0) {
        // int ld = n % 10; // we don't need it, in counting
        cnt++;
        n = n/10;
    }
    return cnt;
}

int countNumber2(int n) {

    // log10(abcd) = 3.something -> 3+1 = 4
    // ex. log10(23) = 2.something --> 1 + 1 = 2

    int cnt = (int)(log10(n) + 1);
    return cnt; 

}

int main() {

   cout <<  countNumber(3232)<<endl;
    cout << countNumber2(12);

    return 0;
}
