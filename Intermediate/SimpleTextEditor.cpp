#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<string> res;
    int q, mode, num;
    cin >> q;
    string input, str = "";
    while (q--) {
        cin >> mode;
        if (mode == 1) {
            res.push(str);
            cin >> input;
            str += input;
        }
        else if (mode == 2) {
            cin >> num;
            res.push(str);
            str.erase(str.size()-num);
        }
        else if (mode == 3) {
            cin >> num;
            cout << str[num-1] << endl;
        }
        else if (mode == 4) {
            str = res.top();
            res.pop();
        }
    }
    return 0;
}