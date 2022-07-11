#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'balancedSums' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

string balancedSums(vector<int> arr) {
    
    if (arr.size() == 1 || (arr.size() == 2 && (arr[0] == 0 || arr[1] == 0)))
        return "YES";
        
    int size = arr.size(), partial_sum = 0, arr_sum = 0;
    
    for (int &n : arr)
        arr_sum += n;
    arr_sum -= arr[0];
    for (int i = 0; i < size; i++) {
        if (arr_sum == partial_sum)
            return "YES";
        else if (arr_sum < arr[i] + partial_sum)
            return "NO";
        partial_sum += arr[i];
        arr_sum -= arr[i+1];
    }
    return "NO";
}