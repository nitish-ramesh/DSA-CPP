#include <algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// void pattern1(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << "I love you ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-1-i; j++) {
//             cout << "I love you ";
//         }
//         cout << endl;
//     }
// }

// void fn(vector<int>& v) {
//     int mx = *max_element(v.begin(), v.end());
//    vector<int> hash(mx+1, 0);
//     for (int i = 0; i < v.size(); i++) {
//         hash[v[i]]++;
//     }
// }


// void fn(vector<int>& v, int k) {
//
//     if (k >= v.size()-1) return;
//
//     int swap = 0;
//     for (int i = 0; i < v.size()-1; i++) {
//         if (v[i] > v[i+1]) {
//             int t = v[i+1];
//             v[i+1] = v[i];
//             v[i] = t;
//             swap++;
//         }
//     }
//     if (swap == 0) return;
//
//     fn(v, k+1);
// }


// stl practice:->





int main() {

    // vector<pair<int, char>> v = {{1, 'a'}, {2, 'b'}};
    // for (auto x: v) cout << x.first << " " << x.second<< " ";

    vector<int> v = {2,1,4,3};

    vector<int> :: iterator it = v.begin();


    for (int x : v) cout << *it << " " << endl;
}