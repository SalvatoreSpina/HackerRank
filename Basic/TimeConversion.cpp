#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string res = s.substr(0, s.length()-2);
    if (s[s.length()-2] == 'P') {
        res[0] += 1;
        res[1] += 2;
    }
    else if (res[0] == '1' && res[1] == '2')
    {
        res[0] = '0';
        res[1] = '0';
    }
    if (res[0] == '2' && res[1] == '4')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            res[0] = '1';
            res[1] = '2';
        }
        else {
            res[0] = '0';
            res[1] = '0';
        }
    }
    cout << res;
    return res;
}
