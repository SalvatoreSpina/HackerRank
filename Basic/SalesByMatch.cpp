#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    map<int, int> maps;
    int pairs = 0;
    for (int n : ar)
        maps[n] += 1;
    for (pair<int, int> p : maps) {
            if (p.second >= 2)
                pairs += floor(p.second / 2);
    }
    return pairs;
}