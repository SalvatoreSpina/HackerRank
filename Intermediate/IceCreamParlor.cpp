#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'icecreamParlor' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER m
 *  2. INTEGER_ARRAY arr
 */

vector<int> icecreamParlor(int m, vector<int> arr) {
    
    vector<int> vec;
    map <int, int> maps;
    
    for (size_t i = 0; i < arr.size(); i++)
        maps[arr[i]] = i+1;
    
    for (size_t i = 0; i < arr.size(); i++) {
        auto it = maps.find(m-arr[i]);
        if (it != maps.end() && i+1 != it->second) {
            vec.push_back(i+1);
            vec.push_back(it->second);
            return vec;
        }
    }
    return vec;
}