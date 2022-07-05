#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m) {
    if (m == 1)
        return 2;
    return (n % 2 == 1 ? 1 : 2);
}
