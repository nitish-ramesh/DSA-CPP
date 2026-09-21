//
// Created by 91914 on 21-09-2026.
//
#include <iostream>
using namespace std;

// not use f(i+1, n) // do this by backtrackoing
 void fn(int i, int n) {
     if (i < 1) {
         return;
     }

     fn(i-1, n);
     cout << i << endl;
 }

int main() {

     fn(3,3);

    return 0;
}
