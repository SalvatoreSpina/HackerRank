#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'highestValuePalindrome' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER n
 *  3. INTEGER k
 */

string highestValuePalindrome(string s, int n, int k) {
    
    if (n == 1)
        return k != 0 ? "9" : s;
    vector<pair<char, bool>> str;
    
    for (const char c : s)
        str.push_back(make_pair(c, false));
        
    size_t l = 0, r = n-1;
    
    while (l <= r) {
        if (s[l] != s[r]) {
            if (s[l] > s[r]) {
                str[r].second = true;
                s[r] = s[l];
            } else {
                str[l].second = true;
                s[l] = s[r];
            }
            k--;
        }
        l++;
        r--;
    }
    
    if (k < 0)
        return "-1";
    
    l = 0, r = n-1;
    while (l <= r) {
        if (l == r && k >= 1)
            s[l] = '9';
        if (s[l] != '9') {
            if ((!str[l].second && !str[r].second) && k >= 2) {
                s[l] = s[r] = '9';
                k-=2;
            } else if ((str[l].second || str[r].second) && k >= 1) {
                s[l] = s[r] = '9';
                k--;
            }
        }
        l++;
        r--;
    }
    return s;
}