#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) {
    int idx, min = INT_MAX;
    sort(arr.begin(), arr.end());
    for (size_t i = 0; i < arr.size()-k+1; i++) {
        if (arr[i+k-1] - arr[i] < min) {
            idx = i;
            min = arr[i+k-1] - arr[i];
        }
    }
    return min;
}