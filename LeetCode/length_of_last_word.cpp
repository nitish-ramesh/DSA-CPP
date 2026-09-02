//
// Created by 91914 on 02-09-2026.
//
#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] == ' ') {
            return (s.size()-1) - i;
        }
    }
    return s.size();
}
// agar pichhe space hoga toh ye fail ho jayega jese "hello world " so 2nd

int better(string s) {
    int i = s.size()-1;
    int cnt = 0;



    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    if (s.size() == 1) return 1;

    while (i >= 0) {
        cnt++;

        if (s[i] == ' ') {
            return cnt-1;
        }
        i--;
    }
    return cnt;
}



int main() {
    cout << lengthOfLastWord("hello world") << endl;
    cout << better("a ");
    return 0;
}