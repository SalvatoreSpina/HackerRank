#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {
    for (string &str : grid)
        sort(str.begin(), str.end());
    int len = grid[0].length();
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++) {
            if (grid[j][i] > grid[j+1][i])
                return "NO";
        }
    }
    return "YES";
}
