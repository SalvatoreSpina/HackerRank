#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER_ARRAY queries
 */

vector<int> solve(vector<int> arr, vector<int> queries) {
    
    vector<int> res;
    int max, min;
    
    for (size_t i = 0; i < queries.size(); i++) {
        max = *max_element(arr.begin(), arr.begin() + queries[i]);
        min = max;
        for (size_t j = queries[i]; j < arr.size(); j++) {
            if (max == arr[j-queries[i]])
                max = *max_element(arr.begin() + j - queries[i] + 1, arr.begin() + j + 1);
            else if (arr[j] > max)
                max = arr[j];
            if (max < min)
                min = max;
        }
        res.push_back(min);
    }
    return res;
}