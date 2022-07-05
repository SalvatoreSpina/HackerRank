#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    k %= 26;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] + k > 'Z') ? s[i] + k - 26 : s[i] + k;
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] + k > 'z') ? s[i] + k - 26 : s[i] + k;
        }
    }
    return s;
}
