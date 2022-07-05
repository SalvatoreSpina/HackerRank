#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {
    stack<char> p;
    
    if (s.size() % 2 != 0)
        return "NO";
        
    for (char c : s) {
        if (c == '{')
            p.push('}');
        else if (c == '[')
            p.push(']');
        else if (c == '(')
            p.push(')');
        else if (p.empty())
            return "NO";
        else {
            if (p.top() != c)
                return "NO";
            else 
                p.pop();
        }
    }
    if (p.empty())
        return "YES";
    else
        return "NO";
}
