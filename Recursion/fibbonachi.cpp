//
// Created by 91914 on 22-09-2026.
//
 #include <iostream>
using namespace std;

int fun(int n) {

if (n <= 1) return n;
 int last = fun(n-1);
 int slast = fun(n-2);

 return last + slast;
}

// TC => O(2^n) // exponantial in nature

int main() {
cout << fun(4);
}