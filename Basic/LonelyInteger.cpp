#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    sort(a.begin(), a.end());
    for (size_t i = 0; i < a.size(); i+=2)
    {
        if (a[i] != a[i+1])
            return a[i];
    }
    return 0;
}
