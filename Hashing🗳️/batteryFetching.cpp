//
// Created by 91914 on 27-09-2026.
//
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int batteryFetching(vector<pair<int, int>> drones, int id) {

    unordered_map<int, int> droneHash;
    for (int i = 0; i < drones.size(); i++) {
        droneHash[drones[i].first] = drones[i].second;
    }

    if (droneHash.find(id) != droneHash.end()) {
        return droneHash[id];
    }

    return -1;


}



int main() {

  vector<pair<int, int>> drones= {
        {104, 78},
        {207, 45},
        {315, 91},
        {421, 31},
        {509, 67}
  };

    cout << batteryFetching(drones, 315) << "%";

}
