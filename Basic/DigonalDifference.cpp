#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    //cout << arr[0][0] << endl;
    int size = arr[0].size();
    //cout << size << endl;
    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; i < size; i++)
        sum_1 += arr[i][i];
    for (int i = 0; i < size; i++)
        sum_2 += arr[i][size-1-i];
    return abs(sum_1 - sum_2);
}
