#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int superDigit(string n, int k) {
    
    size_t sum = 0;
    std:string numb = n;
    //numb.reserve(n.length() * k);
    
    //while (k--)
    //    numb += n;
    
    sum = 0;

    for (size_t i = 0; i < numb.length(); ++i) {
        sum += (numb[i] - 48) * k;
    }
    
    numb = to_string(sum);
    
    while ((numb.length()) > 1) {
        sum = 0;
        for (size_t i = 0; i < numb.length(); ++i) {
            sum += numb[i] - 48;
        }
        numb = to_string(sum);
    }
    return stoi(numb);
}
