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

void getIndex(vector<int> v, int K)
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
int main()
{
    // initializing the elements
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        display(arr, 9);
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}