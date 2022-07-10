#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if(s[i] != t[i] && (s[i] == '1' || t[i] == '1'))
            res += '1';
        else
            res += '0';
    }

    return res;
}