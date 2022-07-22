#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    size_t sum1 = 0, sum2 = 0, sum3 = 0;
    queue<int> que1, que2, que3;
    
    for (size_t i = 0; i < h1.size(); i++) {
        sum1 += h1[i];
        que1.push(h1[i]);
    }
    for (size_t i = 0; i < h2.size(); i++) {
        sum2 += h2[i];
        que2.push(h2[i]);
    }
    for (size_t i = 0; i < h3.size(); i++) {
        sum3 += h3[i];
        que3.push(h3[i]);
    }
    
    while (true) {
        if (sum1 > sum2 || sum1 > sum3) {
            sum1 -= que1.front();
            que1.pop();
        }
        if (sum2 > sum1 || sum2 > sum3) {
            sum2 -= que2.front();
            que2.pop();
        }
        if (sum3 > sum1 || sum3 > sum2) {
            sum3 -= que3.front();
            que3.pop();
        }
        if (sum1 == sum2 && sum2 == sum3)
            return sum1;
    }
}