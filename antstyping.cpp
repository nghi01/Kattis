#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <iostream>
#include <vector>
#include <utility>


using namespace std;
int main()
{
    // initializing the elements
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> placeholder{};
    //All possible combinations of pairs of 2 numbers from above:
    vector<pair<int,int>> couples{};
    for (int i = 9; i > 0; i--){
        for (int j = i - 1; j > 0; j--){
            pair <int, int> p;
            p.first = i;
            p.second = j;
            couples.push_back(p);
        }
    }
    // Print to check
    for (pair<int,int>& i : couples){
        cout << i.first << " " << i.second << "\n";
    }
    //Bruteforcing
    for (int i = 9; i )
}