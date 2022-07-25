#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'lilysHomework' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int numbers_swap(vector<int> arr) {
    map<int, int> idxmap;
    int result = 0, swap_idx = 0;
    
    for (size_t i = 0; i < arr.size(); i++)
        idxmap[arr[i]] = i;
    
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] != sorted[i]) {
            result++;
            swap_idx = idxmap[sorted[i]];
            idxmap[arr[i]] = swap_idx;
            swap(arr[i], arr[swap_idx]);
        }
    }
    return result;
}

int lilysHomework(vector<int> arr) {
    
    int swaps = numbers_swap(arr);
    
    vector<int> rev = arr;
    reverse(rev.begin(), rev.end());
    int rev_swaps = numbers_swap(rev);
    cerr << swaps << " | " << rev_swaps << endl;
    return min(swaps, rev_swaps);
}