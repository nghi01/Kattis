#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <vector>
#include <bits/stdc++.h>
#include <string>

using namespace std;
//Display elements of the array
void display(vector<int> a, int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int getIndex(vector<int> v, int K)
{
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), K);
  
    // If element is found
    if (it != v.end()) 
    {
        int index = it - v.begin();
        return index;
    }
}

int StringToInt(char c){
    int i = int(c) - 48;
    return i;
}

int main()
{
    // initializing the elements
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    string sequence;
    int minSteps, transit, transits, count;
    cin >> sequence;
    minSteps = 100;
    do {
        transits = 0;
        for (int i = 0; i < size(sequence) - 1; i++){
            transit = abs(getIndex(arr, StringToInt(sequence[i])) - getIndex(arr, StringToInt(sequence[i+1])));
            transits += transit;
        }
        count = size(sequence) + 2 * transits;
        if (count < minSteps){
            minSteps = count;
        }
    } while (next_permutation(arr.begin(), arr.end()));
    cout << minSteps;
    return 0;
}