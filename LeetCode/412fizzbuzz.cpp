//
// Created by 91914 on 18-10-2026.
//
#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for(int i = 1; i <= n; i++) {
        if(i % 15 == 0){
            ans.push_back("FizzBuzz");
        } else if(i % 3 == 0) {
            ans.push_back("Fizz");
        } else if(i % 5 == 0) {
            ans.push_back("Buzz");
        } else {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}

int main() {

    vector<string> answer = fizzBuzz(15);
    for (string x : answer) cout << x << " ";

}


