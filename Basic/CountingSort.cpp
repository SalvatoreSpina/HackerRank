#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    vector<int> vec(100);
    int value = 0;
    fill(vec.begin(), vec.end(), value);
    for (int n : arr) {
        vec[n]++;
    }
    return vec;
}
