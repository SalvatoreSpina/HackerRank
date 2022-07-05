#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    long int count = 0;
    long int max_sum = LONG_MIN;
    long int min_sum = LONG_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (j != i)
                count += arr[j];
        }
        if (count > max_sum)
            max_sum = count;
        if (count < min_sum)
            min_sum = count;
    }
    cout << min_sum << " " << max_sum << endl;
}
