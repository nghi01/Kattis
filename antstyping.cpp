#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <vector>
#include <bits/stdc++.h>

using namespace std;
//Display elements of the array
void display(vector<int> a, int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    // initializing the elements
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //All possible combinations of pairs of 2 numbers from above:
    // vector<pair<int,int>> couples{};
    // for (int i = 9; i > 0; i--){
    //     for (int j = i - 1; j > 0; j--){
    //         pair <int, int> p;
    //         p.first = i;
    //         p.second = j;
    //         couples.push_back(p);
    //     }
    // }
    // // Print to check
    // for (pair<int,int>& i : couples){
    //     cout << i.first << " " << i.second << "\n";
    // }
    //Bruteforcing
    do {
        display(arr, 9);
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}