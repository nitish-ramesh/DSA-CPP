//
// Created by 91914 on 15-08-2026.
//
#include <iostream>
using namespace std;

int mostFrequent(string str) {

    string str2 = str;

    int count = 1;
    int maxCount = 1;

    for (int i = 0; i < str2.size(); i++) {

        if (count > 1) {
            count = 1;
        }
        char ch = str2[i];

        for (int j = i+1; j < str2.size(); j++) {
            if (ch == str2[j]) {
                count++;
            }

            if (count > maxCount) {
                maxCount = count;
            }
        }
    }
    return maxCount;
}

int main() {

    string str;
    cin >> str;
    int n = mostFrequent(str);
    cout << n;

    return 0;
}