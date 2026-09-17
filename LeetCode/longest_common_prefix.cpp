//
// Created by 91914 on 17-09-2026.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string pfx = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        int j = 0;

        while(j < pfx.size() && j < strs[i].size() && pfx[j] == strs[i][j]) {
            j++;
        }
        pfx = pfx.substr(0, j);

        if(pfx.empty()) return "";
    }
    return pfx;

}

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);


    return 0;
    }


// advance***************************************************************

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

