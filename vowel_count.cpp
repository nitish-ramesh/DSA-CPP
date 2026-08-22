//
// Created by 91914 on 15-08-2026.
//
#include <bits/stdc++.h>
using namespace std;

bool vowelCheck(char ch) {
    const char V[5] = {'a', 'e', 'i', 'o','u'};
    char j = ch;

    for (int i = 0; i < 5; i++) {
        if ( j == V[i]) {
            return true;
        }
    }return false;
}

int isVowel(string s) {
    int count = 0;
    string str = s;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        if (vowelCheck(ch)) {
            count++;
        }
    }
    return  count;
}


int main() {
    string stri;
    cin >> stri;
    int n = isVowel(stri);
    cout << n;
    return 0;
}
