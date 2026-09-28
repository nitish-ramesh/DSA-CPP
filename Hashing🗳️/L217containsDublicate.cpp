//
// Created by 91914 on 27-09-2026.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& v) {
    unordered_map<int, int> hash;

    for(int i = 0; i < v.size(); i++) {
        if(hash.find(v[i]) != hash.end()){
            return true;
        }
        hash[v[i]] = 1;
    }
    return false;
}

int main() {
    vector<int> v = {1,2,3,1};

    cout << containsDuplicate(v);
}
