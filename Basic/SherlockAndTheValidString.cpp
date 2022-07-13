#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    map<char, int> maps;
    for (char &c : s)
        maps[c]++;
    int variance = 0;
    int value = maps.begin()->second;
    for (pair<char, int> p : maps) {
        if (p.second != value)
            variance++;
        if (variance > 1)
            return "NO";
    }
    return "YES";        
}