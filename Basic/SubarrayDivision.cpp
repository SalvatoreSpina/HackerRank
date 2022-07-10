#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    int sum = 0, count = 0;
    size_t j;
    for (size_t i = 0; i < s.size(); i++) {
        sum = 0;
        for (j = 0; j < m; j++) {
            sum += s[i+j];
        }
        if (sum == d)
            count++;
    }
    return count;
}