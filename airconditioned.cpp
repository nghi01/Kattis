#include "stdlib.h"
#include "stdio.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compa(pair<int, int> ltemp, pair<int, int> rtemp) {
    if(ltemp.second == rtemp.second) {
        return ltemp.first < rtemp.first;
    }
    return ltemp.second < rtemp.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> minions;

    for(int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        minions.push_back(p);
    }

    sort(minions.begin(), minions.end(), compa);

    int rooms = 1;
    int threshold = minions[0].second;

    for(int i = 1; i < minions.size(); i++) {
        if(minions[i].first > threshold) {
            threshold = minions[i].second;
            rooms++;
        }
    }

    cout << rooms;
}